#include <stdio.h>
double e(int x,int n)
{
    static double s=1;
    double r;
    if(n==0)
    {
        return s;
    }
    s=1+(x*s/n);
    return e(x,n-1);
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
