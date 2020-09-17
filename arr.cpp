#include<stdio.h>
void f(int ar[]);
int main()
{
	int *ptr;
	int arr[4]={1,2,3,4};
	ptr=arr;
	f(ptr);
	
}
void f(int ar[])
{
	int *ptr1=ar;
	ptr1+=2;
	if(ar[2]==*ptr1)
	{
		printf("hi");
	}
}
