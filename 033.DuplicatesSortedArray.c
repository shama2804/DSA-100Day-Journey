#include <stdio.h>
void findDuplicates(int arr[], int n) 
{
    printf("Duplicates in the array: ");
    int foundDuplicate = 0; 
    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] == arr[i + 1]) 
        {
            if (i == 0 || arr[i] != arr[i - 1]) 
            { 
                printf("%d ", arr[i]);
                foundDuplicate = 1;
            }
        }
    }

    if (!foundDuplicate) 
    {
        printf("No duplicates found");
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    findDuplicates(arr, n);
    return 0;
}


/*
Enter the number of elements: 5
Enter 5 sorted elements: 1 1 4 4 7
Duplicates in the array: 1 4 
*/
