//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *ptr,int size);
int main()
{
	int arr[10]={2,4,62,1,5,56,8,4,23,6},i;
	sort(arr,10);
	//printf("enter the 10 values to short number:-");
//	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	return 0;
}
void sort(int *ptr,int size)
{
	int tmp,i,j,sum=0;
	for(i=0;i<size-1;i++)
	{
//		for(j=i;j<size;j++)
//		{
//			if(ptr[i]>ptr[j])
//			{
//			tmp=ptr[i];
//			ptr[i]=ptr[j];
//			ptr[j]=tmp;
//			}
//		}
	sum=sum+ptr[i];
	}
}
