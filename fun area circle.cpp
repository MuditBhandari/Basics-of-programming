#include<stdio.h>
float ar(float r);
int main()
{
	float n,s;
	scanf("%f",&n);
	s=ar(n);
	printf("area=%f",s);
}
float ar(float r)
{
	float c;
	c=3.14*r*r;
	return c;
}
