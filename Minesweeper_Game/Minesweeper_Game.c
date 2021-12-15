#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Global Variables

int board_size, c, r, number_mines;
char board[100][100];

// This function adds mines to the Minesweeper game.

void add_mines(int n_mines) {
	int mcount = 0, mtries = 0, mcol, mrow;
	while(mcount < n_mines){
		mtries++;
		mcol = rand() %board_size;
		mrow = rand() %board_size;
		if(board[mcol][mrow] != 'X'){
			board[mcol][mrow] = 'X';
			mcount++;
		}
	}
}


//-----------------------------------------------------------------------------

// This function prints the current game board.

void draw_board(char mode) {
	int r, c;
	char playground[board_size][board_size];
	printf("\n----------------------MINESWEEPER----------------------\n\n");
	printf("\t(Number Of Mines: %d)\n\n    ", number_mines);
	for(r = 0; r < board_size; r++){
		printf("%d ", r);
	}
	printf("\n   ");
	for(r = 0; r < board_size+1; r++){
		printf("_ ");
	}
	for(r = 0; r < board_size; r++){
		printf("\n%d | ", r);
		for(c = 0; c < board_size; c++){
			if(mode == 'h' && board[c][r] == 'X'){
				playground[c][r] = '?';
			}
			else{
				playground[c][r] = board[c][r];
			}
			printf("%c ", playground[c][r]);
		}
		printf("|");
	}
	printf("\n   ");
	for(r = 0; r < board_size+1; r++){
		printf("_ ");
	}
	printf("\n");
}


// ---------------------------------------------------------------------------

// This function returns the number of bombs around a block.

int get_number_tiles(int column, int row) {
	int number = 0, hide = 0;

	// if tile has bomb placed, return to function

	if(board[column][row] == 'X'){
		number = 9;
		return number;
	}

	// code looks for bombs placed around current tile

	for(c = column-1; c < column+2; c++){
		for(r = row-1; r < row+2; r++){
			if(c < 0 || r < 0 || c == board_size || r == board_size);
			else if(column == c && row == r && board[c][r] == 'X');
			else if(board[c][r] == 'X'){
				number++;
			}
			else if(board[c][r] == '?'){
				hide++;
			}
			else;
		}
	}
	return number;
}


// ---------------------------------------------------------------------------

// This function reveals a user-selected block.

int user_select_tiles(int column, int row) {
	int tilecount;
	tilecount = get_number_tiles(column, row);

	// if its a bomb
	if(tilecount == 9){
		return 0;
	}
	// if tile is between 0-8 then uncover tile
	else if(0 <= tilecount && tilecount <= 8){
		tilecount += 48;
		board[column][row] = (char) tilecount;
	}
	return 1;

}


// ---------------------------------------------------------------------------


// This function determines whether the user wins.

int did_you_win() {
	for(r = 0; r < board_size; r++){
		for(c = 0; c < board_size; c++){
			if(board[c][r] == '?'){
				return 0;
			}
		}
	}
	return 1;
}

// ---------------------------------------------------------------------------


// end of functions, start of main code

int main() {
	srand(time(0));
	int wrong = 0, score, keeptrying, row, column;
	char mode, end;
	while(1){
		while(1){
			printf("\n\nEnter a size (min : 10 max : 100): ");
			scanf("%d", &board_size);
			if(board_size < 10 || board_size > 100){
				printf("\nSORRY :(\nINVALID SIZE\n");
				continue;
			}
			else{
				break;
			}
		}
		for(r = 0; r < board_size; r++){
			for(c = 0; c < board_size; c++){
				board[c][r] = '?';
			}
		}

		printf("\nEnter a mode type: (hidden: 'h' or obvious: 's') ");
		scanf(" %c", &mode);

		number_mines = (int) ((board_size*board_size)*30)/100;

		add_mines(number_mines);

		score = 0;

		// ------------------------------------------------------------------
		keeptrying = 1;
		while(keeptrying){
			if(mode == 'h'){
				draw_board('h');
			}
			else if(mode == 's'){
				draw_board('s');
				printf("\nEnter 'h' to return to the game: ");
				scanf(" %c", &mode);
				continue;
			}
			else{
				printf("\nThere is no such mode. Please try again: (hidden: 'h' or obvious: 's') ");
				scanf(" %c", &mode);
				continue;
			}
			printf("\nRow: ");
			scanf("%d", &row);
			printf("Column: ");
			scanf("%d", &column);
			printf("\n");

			if(row >= board_size || column >= board_size){
				printf("That number is too high. The order goes 0 to %d\n", board_size-1);
				wrong = 1;
			}
			else if(board[column][row] != '?' && board[column][row] != 'X'){
				printf("Please enter another location.");
				wrong = 1;
			}
			else{
				wrong = 0;
				score++;
				keeptrying = user_select_tiles(column, row);
			}

			if(wrong != 1){
				if(keeptrying == 0){
					printf("\n-----------------------------------------------------\nBOOOM!!!!\nYOU LOSE\nYOUR SCORE: %d", (score - 1) * 10);
					draw_board('s');
					break;
				}
				else if(did_you_win()){
					printf("\n-----------------------------------------------------\nCONGRATS\nYOU WIN\nYOUR SCORE: %d", score * 10);
					draw_board('s');
					break;
				}
			}
		}
		printf("\nEnter 'n' to play a new game, 'e' to log out: ");
		scanf(" %c", &end);
		if(end == 'n'){
			continue;
		}
		else if(end == 'e'){
			break;
		}
	}
    return 0;
}
