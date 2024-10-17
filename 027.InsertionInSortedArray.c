//Inserting an element in a sorted array
#include<stdio.h>
void main()
{
    int A[10000],n,k,i;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the new element to be inserted in the array: \n");
    scanf("%d",&k);
    for(i=n-1;i>=0 && A[i]>k;i--)
    {
            A[i+1]=A[i];
    }        
    A[i+1]=k;
    n++;
    printf("Updated Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}

/*
Enter the number of elements in the array:
5
Enter the elements:
1 3 5 7 10
Enter the new element to be inserted in the array: 
6
Updated Array: 
1	3	5	6	7	10	
*/
