#include <stdio.h>
void findDuplicates(int arr[], int n) 
{
    // Find the maximum element in the array to determine hash table size
    int max = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    // To create a hash table to store counts of elements
    int hashTable[max + 1];  // Assuming non-negative elements
    for (int i = 0; i <= max; i++) 
    {
        hashTable[i] = 0;
    }
    // Insert to hash table with frequencies
    for (int i = 0; i < n; i++) 
    {
        hashTable[arr[i]]++;
    }
    // Print elements that appear more than once
    printf("Duplicates in the array: ");
    int foundDuplicate = 0;
    for (int i = 0; i <= max; i++) 
    {
        if (hashTable[i] > 1) 
        {
            printf("%d ", i);
            foundDuplicate = 1;
        }
    }
    if (!foundDuplicate) 
    {
        printf("No duplicates found");
    }
    printf("\n");
}
int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    findDuplicates(arr, n);
    return 0;
}

/*
Enter the number of elements: 8
Enter 8 elements: 1 1 3 3 5 7 7 7
Duplicates in the array: 1 3 7 
  */
