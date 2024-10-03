#include <stdio.h>
int removeDuplicates(int* nums, int numsSize) 
{
    if (numsSize == 0) 
    {
        return 0;
    }
    int newIndex = 1;
    for (int i = 1; i < numsSize; i++) 
    {
        if (nums[i] != nums[i - 1]) 
        {
            nums[newIndex] = nums[i];
            newIndex++;
        }
    }
    return newIndex;
}
int main() 
{
    int nums[100];
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d sorted integers: ", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &nums[i]);
    }
    int k = removeDuplicates(nums, size);
    printf("Number of unique elements: %d\nUnique elements: ", k);
    for (int i = 0; i < k; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
