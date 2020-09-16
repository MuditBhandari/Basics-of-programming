#include<stdio.h>
int main()
{
    int size=3;
    int a[size][size];
    int b[size][size];
    int c[size][size];
    int row,column;
    for(row=0;row<size;row++)
    {
        for(column=0;column<size;column++)
        {
            scanf("%d",&a[row][column]);
        }
    }
    for(row=0;row<size;row++)
    {
        for(column=0;column<size;column++)
        {
            scanf("%d",&b[row][column]);
        }
    }
    for(row=0;row<size;row++)
    {
        for(column=0;column<size;column++)
        {
            c[row][column]=a[row][column]+b[row][column];
        }
    }
    for(row=0;row<size;row++)
    {
        for(column=0;column<size;column++)
        {
            printf("%d ",c[row][column]);
        }
        printf("\n");
    }
}
