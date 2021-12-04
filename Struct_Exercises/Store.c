#include <stdio.h>
#include <string.h>
#define N 1
#define M 2

/*
Create store list in struct structure.
Define each store's name, street name, neighborhood, phone number, sales amount in the struct.
- Each store employs 3 workers. Specify the name, surname and age of the workers in the struct.
- 5 items are sold in each store. Each product has its own reference code and price.
- Create struct structure for these three stores worker and product.
- Write 2 functions. First, fill in each product.
- Let the second fill each worker.
- Fill the store in a new function using these two functions.
- Write 3 functions that print the values ​​we fill in separately for store, worker and product.
- Write a function that presses the oldest worker to the screen.
- Write a function that suppresses the average product price in each store.
- Write a function that suppresses the neighborhood where the store is located.
- Write a function that prints the store with the highest sales figures.
- Write a C program compiled as follows for 2 stores using the above functions.
*/


typedef struct {
    char reference_code[20];
    float price;
}product;
typedef struct{
    char surname[20];
    char name[20];
    int age;
}worker;
typedef struct{
    char name[10];
    char street_name[20];
    char neighbourhood[12];
    char phone[15];
    float sale;
    worker e1;
    worker e2;
    worker e3;
    product p[M];
}store;
void create_product(product *pr)
{
    printf("Enter Reference Code: ");
    scanf("%s",pr->reference_code);
    printf("Please enter price: ");
    scanf("%f",&pr->price);
}
void create_worker(worker *em)
{
    printf("Enter worker's surname: ");
    scanf("%s",em->surname);
    printf("Enter worker's name: ");
    scanf("%s",em->name);
    printf("Enter worker's age: ");
    scanf("%d",&em->age);
}
void create_store(store *m)
{
    int i;
    printf("Enter store's name: ");
    scanf("%s",m->name);
    printf("Please enter the street name where the store is located: ");
    scanf("%s",m->street_name);
    printf("Enter the name of the neighborhood where the store is located: ");
    scanf("%s",m->neighbourhood);
    printf("Enter store's phone number: ");
    scanf("%s",m->phone);
    printf("Enter the sales figure: ");
    scanf("%f",&m->sale);
    printf("Worker 1 : \n");
    create_worker(&m->e1);
    printf("Worker 2 : \n");
    create_worker(&m->e2);
    printf("Worker 3 : \n");
    create_worker(&m->e3);
    for ( i = 0; i< M; i++)
    {
        printf("Enter products %d: ",i);
        create_product(&m->p[i]);
    }
}
void print_product(product p)
{
    printf("\tReference Code: %s\n",p.reference_code);
    printf("\tPrice: %f\n",p.price);
}
void print_worker(worker e)
{
    printf("\tName: %s\n",e.name);
    printf("\tSurname: %s\n",e.surname);
    printf("\tAge: %d\n",e.age);
}
void print_store(store m)
{
    int i;
    printf("Store's name: %s\n",m.name);
    printf("The street where the store is located: %s\n",m.street_name);
    printf("Neighborhood where the store is located: %s\n",m.neighbourhood);
    printf("Store's phone number: %s\n",m.phone);
    printf("Sales figure: %f\n",m.sale);
    printf("Worker 1 :\n");
    print_worker(m.e1);
    printf("Worker 2 :\n");
    print_worker(m.e2);
    printf("Worker 3 :\n");
    print_worker(m.e3);
    for ( i = 0; i< M; i++)
    {
        printf("Product %d: \n",i);
        print_product(m.p[i]);
    }
}
void oldest(store m)
{
	worker old;
    if (m.e1.age >old.age)
        old= m.e1;
    if (m.e2.age >old.age)
        old = m.e2;
    if (m.e3.age >old.age)
        old = m.e3;
    printf("Oldest Worker:\n");
    print_worker(old);
}
void average_price(store m[N])
{
    int i, j;
    float s;
    for ( i=0; i<N; i++)
    {
        for( j =0; j<M; j++)
        {
            s+=m[i].p[j].price;
        }
        printf(" Average price of products in %s store : %f\n",m[i].name,(float) s/M);
    }
}
void neighbourhood(store m[N], char q[12])
{
    int i;
    for ( i = 0; i<N; i++)
    {
        if(stricmp(m[i].neighbourhodod, q)==0)
            printf("There is a %s store in the neighborhood of %s.\n", m[i].neighbourhood, m[i].name);
    }
}

int main()
{
    store m[N];
    int i;
    for(i=0; i<N; i++)
    {
        printf("Store %d:\n",i);
        create_store(&m[i]);
    }
    for(i=0; i<N; i++)
    {
        printf("Store %d:\n",i);
        print_store(m[i]);
    }
    oldest(m[0]);
    average_price(m);
    neighbourhood(m, "sisli");

    return 0;
}
