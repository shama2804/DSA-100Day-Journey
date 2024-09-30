#include<stdio.h>
void TOH(int n, char A,char C, char B)
{
  if(n==1)
  {
    printf("Move disk 1 from %c rod to %c rod\n",A,C);
    return;
  }
  TOH(n-1,A,B,C);
  printf("Move disk %d from %c rod to %c rod\n",n,A,C);
  TOH(n-1,B,C,A);
}
int main()
{
  int n;
  char A='A';
  char B='B';
  char C='C';
  printf("Enter the number of disks");
  scanf("%d",&n);
  TOH(n,A,C,B);
  return 0;
}

