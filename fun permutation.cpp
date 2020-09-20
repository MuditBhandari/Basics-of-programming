#include<stdio.h>
void per(int,int);
int main()
{
	float n,r;
	scanf("%f %f",&n,&r);
	per(n,r);
}
void per(int a,int b)
{
	float p,i,j,prod1=1,prod2=1,facta,factb,c;
	for(i=a;i>=1;i--)
	{
		prod1=prod1*i;
	}
	facta=prod1;
	c=a-b;
	for(i=c;i>=1;i--)
	{
		prod2=prod2*i;
	}
	factb=prod2;
	p=facta/(factb);
	printf("%f",p);
}

