#include <stdio.h>
#include <stdlib.h>
void findDuplicates(int arr[], int n) 
{
    int max=arr[0];
    for (int i=0; i<n; i++) 
    {
        if (arr[i]>max) 
        {
            max=arr[i];
        }
    }
    int *hashTable = (int *)calloc(max+1,sizeof(int));  
    for (int i=0; i<n; i++) 
    {
        hashTable[arr[i]]++;
    }
    printf("Duplicates in the array: ");
    int foundDuplicate=0;
    for (int i=0; i<=max; i++) 
    {
        if (hashTable[i]>1) 
        {
            printf("%d ",i);
            foundDuplicate=1;
        }
    }
    if (!foundDuplicate) 
    {
        printf("No duplicates found\n");
    }
    free(hashTable);
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    findDuplicates(arr,n);
    return 0;
}


/*
Enter the number of elements: 10
Enter 10 elements: 3 5 5 6 2 3 4 5 6 9
Duplicates in the array: 3 5 6 
*/
