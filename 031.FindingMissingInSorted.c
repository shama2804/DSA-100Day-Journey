#include<stdio.h>
void main()
{
    int A[10000], n, i;
    int low, diff
    printf("Enter the number of elements in the array A:\n");
    scanf("%d",&n);
    printf("Enter the elements of array A:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The missing elements are:\n");
    low=A[0];
    diff=low-0;
    for(i=0;i<n;i++)
    {
        if(A[i]-i!=diff)
        {
           while (diff + i < A[i]) 
           {
                printf("%d\t", diff + i);
                diff++;
           }
        }
    }
}

/*
Enter the number of elements in the array A:
5
Enter the elements of array A:
1 3 5 7 9
The missing elements are:
2	4	6	8
*/
