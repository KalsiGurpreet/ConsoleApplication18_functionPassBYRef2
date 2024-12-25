#include<stdio.h>

void incr(int*);

void incr(int* ptr)
{
	(*ptr)++;
}

void main(void)
{
	int i = 100;

	incr(&i);   // can use this prototype which creates a pointer.

	printf("i = %d\n", i);

}