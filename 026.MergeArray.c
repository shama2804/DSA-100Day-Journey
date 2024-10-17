#include<stdio.h>
void main()
{
    int A[10000],B[10000],C[10000],n,m,i,j,k;
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
    i=0;
    j=0;
    k=0;
    while(i<n&&j<m)
    {
        if(A[i]<=B[j])
        {
            C[k++]=A[i++];
        }
        else
        {
            C[k++]=B[j++];
        }
    }
    while(i<n)
    {
        C[k++]=A[i++];
    }
    while(j<m)
    {
        C[k++]=B[j++];
    }
    printf("Updated Array: \n");
    for(i=0;i<k;i++)
    {
        printf("%d\t",C[i]);
    }
}

/*
Enter the number of elements in the array A:
3
Enter the elements of array A:
1 4 9
Enter the number of elements in the array B:
3
Enter the elements of array B:
2 5 10
Updated Array: 
1	2	4	5	9	10
    */
