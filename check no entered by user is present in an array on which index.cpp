#include<stdio.h>
int main()
{
	int n;
	printf("Enter no to check");
	scanf("%d",&n);
	int a[n],i,b;
	for(i=0;i<n;i++)
	scanf("%d\n",&a[i]);
	printf("enter the no to check");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
	if(b==a[i])
	printf("the no is present at %d",i);
}
}
