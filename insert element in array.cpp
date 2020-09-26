#include<stdio.h>
int main()
{
	int ar[100],i,size,element,pos;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	scanf("%d",&ar[i]);
	printf("\nenter the element to insert\n");
	scanf("%d",&element);
	printf("enter the position to insert\n");
	scanf("%d",&pos);
	for(i=size;i>=pos;i--)
	{
		ar[i]=ar[i-1];
	}
	ar[pos-1]=element;
	size++;
	for(i=0;i<size;i++)
	printf("%d\t",ar[i]);
	
}
