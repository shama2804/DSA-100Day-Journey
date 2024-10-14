/*
There are 2 methods to reverse an array.
1.Using Auxillary array
2.Scanning amd swapping from 2 end
This is using the first method
*/

#include<stdio.h>
int main()
{
    int n, A[1000], B[1000], i, j;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i = n - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    for(i = 0; i < n; i++)
    {
        A[i] = B[i];
    }
    printf("Reversed array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        if (i < n - 1)  
            printf(", ");
    }
    printf("\n");
    return 0;
}

/*
Enter the number of elements: 
5
Enter the elements:
2 4 7 9 11
Reversed array: 11, 9, 7, 4, 2
  */
