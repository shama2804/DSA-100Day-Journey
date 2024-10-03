#include <stdio.h>
double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
    {
        return 1;
    }
    else
    {
       r=e(x,n-1);
       p = p * x;
       f = f * n;
       return r+(p/f);
    }
}
int main()
{
    int x,n;
    double res;
    printf("Enter x and n value such that we need to e(x,n)\n");
    scanf("%d %d",&x,&n);
    res=e(x,n);
    printf("Result: %f",res);
    return 0;
}
