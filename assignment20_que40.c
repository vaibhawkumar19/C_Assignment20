//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[3][20]={"vaibhaw","rahul","monah"};
	for(i=0;i<3;i++)
	{
		if(strcmp(str[i],"vaibhaw")==0);
			printf("found");
		else
			printf("not found");
	}
return 0;
}
