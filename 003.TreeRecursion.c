#include<stdio.h>
int fun(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        fun(n-1);
        fun(n-1);
    }
}
void main()
{
    int n;
    printf("Enter the n value: ");
    scanf("%d", &n);
    fun(n);
}
