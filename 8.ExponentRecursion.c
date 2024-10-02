#include <stdio.h>
int powr(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        return powr(m*m,n/2);
    }
    else
    {
        return m*powr(m*m,(n-1)/2);
    }
}

int main()
{
    int m,n;
    int power;
    printf("Enter m and n value such that m^n\n");
    scanf("%d %d",&m,&n);
    power=powr(m,n);
    printf("Result: %d\t",power);
}
