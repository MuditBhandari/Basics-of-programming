#include<stdio.h>
int convert(int,int);
int main()
{
	int h,m,t;
	printf("enter time in hr and min");
	scanf("%d %d",&h,&m);
	t=convert(h,m);
	printf("time in minutes is %d",t);
	
}
int convert(int h,int m)
{
	int c;
	h=h*60;
	c=h+m;
	return c;
}

