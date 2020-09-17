#include<stdio.h>
int swap(int*, int*);
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d", a, b);
}
int swap(int* x, int* y)
{
	*x=*x + 2;
	*y=*y + 2;
	return 0;
}