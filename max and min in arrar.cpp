#include<stdio.h>
int main()
{
	int n,ar[100],i,max,min;
	printf("Enter size of array");
	scanf("%d",&n);
	printf("Enter %d arrays",n);
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	max=ar[0];
	min=ar[0];
	for(i=0;i<n;i++)
	{
		if(ar[i]>max)
		max=ar[i];
		if(ar[i]<min)
		min=ar[i];
	}
	printf("max is %d\nmin is %d",max,min);
}
