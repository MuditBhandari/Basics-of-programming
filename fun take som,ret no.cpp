#include<stdio.h>
void add(int,int);
int main()
{
	int x,y;
	printf("enter two nos");
	scanf("%d%d",&x,&y);
	add(x,y);
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("sum is %d",c);
}

