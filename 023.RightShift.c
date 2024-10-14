#include<stdio.h>
int main()
{
    int n, A[1000], i;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i = n - 1; i > 0; i--)
    {
        A[i] = A[i - 1]; 
    }
    A[0] = 0;
    printf("Right Shifted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

/*
Enter the number of elements: 
5
Enter the elements:
1 2 3 4 5 
Right Shifted array: 0 1 2 3 4 
*/
