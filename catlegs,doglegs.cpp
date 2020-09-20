#include<stdio.h>
int main()
{
	int dogs,cats;
	int i,leg;
	scanf("%d %d",&dogs,&cats);
	int doglegs,catlegs,legs=4;
	doglegs=dogs*legs;
	catlegs=cats*legs;
	for(i=dogs;i>0;i--)
	{
		catlegs=catlegs-4;
	}
	leg=catlegs;
	printf("%d",doglegs+leg);
	

}
