#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

int *c;
int a=500;
int b=500;

c = ((int *)(malloc((1 * sizeof(int)))));

*c= a + b;
printf("Sum is: %d \n",*c);
  
free(c);



}

