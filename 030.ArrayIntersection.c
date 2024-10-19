#include<stdio.h>
void main()
{
    int A[10000],B[10000],C[10000],n,m,i,j,k;
    int index=0,isCommon;
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
    for(j=0;j<m;j++)
    {
        isCommon=0;
        for(k=0;k<n;k++)
        {
            if(B[j]==A[k])
            {
                isCommon=1;
                break;// No need to check further, B[j] is common
            }
        }
        if(isCommon)
        {
            C[index++]=B[j];
        }
    }
    
    if(index == 0)
    {
        printf("No common elements found.\n");
    }
    else
    {
        printf("Intersection of A and B\n: \n");
        for(i=0;i<index;i++)
        {
            printf("%d\t",C[i]);
        }
    }
}

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
3	4	
*/
