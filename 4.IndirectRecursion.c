#include<stdio.h>
int funcB(int n);
int funcA(int n)
{
  if(n>0)
  {
   printf("%d ",n);
   funcB(n-1);
  }
}
int funcB(int n)
{
   if(n>1)
   {
    printf("%d ",n);
    funcA(n/2);
   }
}
void main()
{
  int n;
  printf("Enter the n value: \n");
  scanf("%d",&n);
  funcA(n);
}

