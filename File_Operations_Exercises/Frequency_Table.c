#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct List{
	int frequency;
	float relative_frequency, middle, max, min;
}Data;

void Sort(int size, double array[size]){
	double temp;
	int i, j;
	for(i = 0; i < size-1; i++){
		for(j = 0; j < size-i-1; j++){
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

int main()
{
	int number, i = 0, j, size, maxFrequency;
	double data[200], class_range, min, max, average = 0, mode, median, variance, standard_deviation;
	FILE* file;
	file = fopen("Frequency_Table.txt", "r");
	if(file == NULL){
		printf("Failed to create file.");
    }
    else{
		while(!feof(file)){
			fscanf(file, "%lf", &data[i]);
			i++;
		}
	}
	number = data[0];
	size = i;
	for(i = 0; i < size; i++){
		data[i] = data[i+1];
	}
	size--;

	Sort(size, data);

	class_range = (data[size-1] - data[0]) / number;

	Data Classes[number];

	min = data[0];
	max = data[0]+class_range-0.01;
	Classes[0].max = max;
	Classes[0].min = min;
	Classes[0].middle = Classes[0].max - ((class_range-0.01)/2);
	for(i = 1; i < number; i++){
		min += class_range;
		max += class_range;
		Classes[i].min = min;
		Classes[i].max = max;
		Classes[i].middle = Classes[i].max - ((class_range-0.01)/2);
	}
	for(i = 0; i < number; i++){
		Classes[i].frequency = 0;
		for(j = 0; j < size; j++){
			if(data[j] >= Classes[i].min && data[j] <= Classes[i].max){
				Classes[i].frequency++;
			}
		}
	}
	for(i = 0; i < number; i++){
		Classes[i].relative_frequency = (float) Classes[i].frequency / size;
		average += Classes[i].frequency * Classes[i].middle;
	}
	average /= size;

	maxFrequency = Classes[0].frequency;
	for(i = 1; i < number; i++){
		if(maxFrequency < Classes[i].frequency){
			maxFrequency = Classes[i].frequency;
		}
	}
	for(i = 0; i < number; i++){
		if(maxFrequency == Classes[i].frequency){
			break;
		}
	}
	mode = Classes[i].min + (((Classes[i].frequency - Classes[i-1].frequency)/((Classes[i].frequency - Classes[i-1].frequency)+
		(Classes[i].frequency - Classes[i+1].frequency)))*class_range);

	for(i = 0; i < number; i++){
		if(data[size/2] >= Classes[i].min && data[size/2] <= Classes[i].max){
				break;
			}
	}
	int total = 0;
	for(j = 0; j<i; j++){
		total += Classes[j].frequency;
	}
	median = Classes[i].min + ((((size/2) - total) / Classes[i].frequency)*class_range);

	float total1 = 0;
	for(i = 0; i < number; i++){
		total1 += Classes[i].frequency * Classes[i].middle;
	}
	total1 /= size;
	float total2 = 0;
	for(i = 0; i < number; i++){
		total2 += (pow((Classes[i].middle - total1), 2)*Classes[i].frequency);
	}
	variance = total2/(size);
	standard_deviation = sqrt(variance);
	fclose(file);

	file = fopen("Frequency_Table1.txt", "w");
	if(file == NULL){
		printf("Failed to create file.");
    }
    else{
		fprintf(file, "    Alt    Ust    Orta    Frekans    Goreli Frekans\n");
		for(i = 0; i < number; i++){
			fprintf(file, "    %.2f   %.2f   %.2f       %d            %.2f\n", Classes[i].min, Classes[i].max, Classes[i].middle, Classes[i].frequency, Classes[i].relative_frequency);
		}
		fprintf(file, "\n    Ortalama       = %.5f\n    Mod            = %.1f\n    Medyan         = %.1f\n", average, mode, median);
		fprintf(file, "    Varyans =        %f\n    Standart Sapma = %f", variance, standard_deviation);
    }

    printf("    Alt    Ust    Orta    Frekans    Goreli Frekans\n");
		for(i = 0; i < number; i++){
			printf("    %.2f   %.2f   %.2f       %d            %.2f\n", Classes[i].min, Classes[i].max, Classes[i].middle, Classes[i].frequency, Classes[i].relative_frequency);
		}
		printf("\n    Ortalama       = %.5f\n    Mod            = %.1f\n    Medyan         = %.1f\n", average, mode, median);
		printf("    Varyans        = %f\n    Standart Sapma = %f\n", variance, standard_deviation);

	return 0;
}
