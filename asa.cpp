#include<stdio.h>
int main()
{
	int i=10;
	int const j=20;
	int *ptr=&i;
	printf("%d",*ptr);
	ptr=&j;
	printf("%d",*ptr);
	return 0;
}
