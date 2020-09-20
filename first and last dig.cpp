#include<stdio.h>
int main()
{
	int a,ld,b,fd;
	scanf("%d",&a);
	ld=a%10;
	while(a>=10)
	{
		a=a/10;
		
	}
	fd=a;
	printf("fd=%d\nld=%d",fd,ld);
	
}
