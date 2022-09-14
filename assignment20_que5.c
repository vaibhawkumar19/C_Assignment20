//5. Write a program to find the maximum number between two numbers using a pointer.
#include<stdio.h>
#include<conio.h>
int main()
{
	int m,s,*a=&m,*b=&s;
	printf("***maxmin number***");
	printf("\n____________________");
	printf("\nenter the two number ");
	scanf("%d %d",a,b);
	if(*a>*b)
		printf("a is maximum number %d ",*a);
	else
		printf("b is maximun number %d",*b);
}
