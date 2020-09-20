#include<stdio.h>
void bubble_sort(int[],int);
int main()
{
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubble_sort(a,n);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void bubble_sort(int a[],int n)
{
	int round,i,temp;
	for(round=0;round<n-1;round++)
	for(i=0;i<n-round-1;i++)
	if(a[i]>a[i+1])
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	
}
