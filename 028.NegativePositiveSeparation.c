//Shifting all the negative values to the left side
#include<stdio.h>
void main()
{
    int A[10000],n,i,j,temp;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter the elements which also includes negative numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    i=0;
    j=n-1;
    while(i<j)
    {
        while(A[i]<0 && i<j)
        {
            i++;
        }
        while(A[j]>0 && i<j)
        {
            j--;
        }
        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    printf("Updated Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}
/*
Enter the number of elements in the array:
5
Enter the elements which also includes negative numbers:
3 -3 6 -2 4
Updated Array: 
-2	-3	6	3	4
  */
