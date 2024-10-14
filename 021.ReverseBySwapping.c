/*
 The program uses two pointers (i and j), where i starts from the beginning and j from the end of the array.
 It swaps elements at these two indices and continues moving inward until all elements are reversed.
*/
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
    for(i = 0, j = n - 1; i < j; i++, j--)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
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
1 3 5 7 9
Reversed array: 9, 7, 5, 3, 1
  */
