#include<stdio.h>
void main()
{
    int A[100];
    int i, length, index, x;
    
    printf("Enter the total number of elements present before the deletion:\t");
    scanf("%d",&length);
    
    printf("Enter the elements:\n");
    for(i = 0; i<length; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the index of element you want to delete:\t");
    scanf("%d",&index);
    
    for(i=index; i<length-1; i++)
    {
        A[i] = A[i+1];
    }
    length--;
    
    printf("Array after deletion:\n");
    for(i=0; i<length;i++)
    {
        printf("%d ", A[i]);
    }
}
