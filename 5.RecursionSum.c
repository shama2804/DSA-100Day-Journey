//To find the sum of N natural numbers using recursions
#include<stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return sum(n-1)+n;
    }
}
int main()
{
    int n,s;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    s=sum(n);
    printf("Sum: %d\t",s);
}
