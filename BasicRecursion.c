//The difference between placing the function call

#include<stdio.h>
int fun1(int n)
{
  if(n>0)
  {
    printf("%d\t",n);//Performs during the calling phase
    fun1(n-1);
    //Nothing is done during returning phase
  }
}
void main()
{
  int x=3;
  fun1(x);
}
//OUTPUT: 3   2   1

//Have included 2 main functions, only to check the difference in their outputs. Cannot execute 2 main functions in the same program. Can be executed separately

//2nd type
#include<stdio.h>
int fun2(int n)
{
  if(n>0)
  {
    //Nothing executed before calling phase
    fun2(n-1);//Calls this function untill the n values becomes 0
    printf("%d\t",n);//This part of the program is executed during the returning phase
  }
}
void main()
{
  int x=3;
  fun2(x);
}
//OUTPUT: 1   2   3
