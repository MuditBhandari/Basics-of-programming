#include<stdio.h>
int main()
{
    int n,orig, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);
    orig=n;

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    if(reversedNumber==orig)
    printf("palindrome number ");
    else 
    printf("Not palinddrome");
}
    
