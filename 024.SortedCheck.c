#include<stdio.h>
int main()
{
    int n, A[1000], i, sorted = 1;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter the elements in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Checking if the array you entered is sorted...\n");

    for(i = 0; i < n-1; i++)
    {
        if(A[i] > A[i+1])
        {
            sorted = 0;
            break; 
        }
    }

    if(sorted)
        printf("The array is sorted.\n");
    else
        printf("The array is not sorted.\n");

    return 0;
}
