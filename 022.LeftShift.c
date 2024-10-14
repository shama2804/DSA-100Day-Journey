#include<stdio.h>
int main()
{
    int n, A[1000], temp, i, j;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i = 1;i<n;i++)
    {
        A[i-1]=A[i];
    }
    printf("Left Shifted array\t");
    for(i = 0; i < n - 1; i++)
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
2 4 7 6 9
Left Shifted array	4 7 6 9 
  */
