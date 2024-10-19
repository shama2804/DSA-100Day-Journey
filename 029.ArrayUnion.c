#include<stdio.h>
void main()
{
    int A[10000],B[10000],C[10000],n,m,i,j,k;
    int index=0,isUnique;
    printf("Enter the number of elements in the array A:\n");
    scanf("%d",&n);
    printf("Enter the elements of array A:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the number of elements in the array B:\n");
    scanf("%d",&m);
    printf("Enter the elements of array B:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&B[i]);
    }
    for(i=0;i<n;i++)
    {
        C[i]=A[i];
    }
    index=n;
    for(j=0;j<m;j++)
    {
        isUnique=1;
        for(k=0;k<n;k++)
            {       
                if(B[j]==A[k])
                {
                   isUnique=0;
                   break;
                }
            }
            if(isUnique)
            {
                C[index++]=B[j];
            }
    }
    printf("Updated Array: \n");
    for(i=0;i<index;i++)
    {
        printf("%d\t",C[i]);
    }
}
//The time complexity will be O(n^2). In order to reduce the time complexity we can use mergeing method.

/*
Enter the number of elements in the array A:
4
Enter the elements of array A:
1 2 3 4
Enter the number of elements in the array B:
4
Enter the elements of array B:
3 4 5 6
Updated Array: 
1	2	3	4	5	6
*/
