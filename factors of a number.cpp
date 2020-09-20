#include<stdio.h>
int main()
{
	int n,factor,i;
	scanf("%d",&n);
	printf("Factors of %d are:\n",n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		printf("%d\n",i);
		
	}
}
