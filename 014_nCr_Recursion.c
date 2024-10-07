#include<stdio.h>
int C(int n,int r)
{
    if(n==r||r==0)
        return 1;
    else
        return C(n-1,r-1)+C(n-1,r);
}
int main()
{
    int n,r;
    printf("Enter n and r value:\t");
    scanf("%d %d",&n,&r);
    printf("The result of NCR is:\t");
    printf("%d\t",C(n,r));
}
