//To find the factorial of a number 'n' using recursion
#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}
int main()
{
    int n,s;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    s=fact(n);
    printf("Factorial value of n: %d\t",s);
}
