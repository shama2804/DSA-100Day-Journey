#include <stdio.h>
int removeElement(int* nums, int numsSize, int val) 
{
    int k = 0;
    for (int i = 0; i < numsSize; i++) 
    {
        if (nums[i] != val) 
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;  
}

int main() {
    int nums[100], i, n, val, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter the value to remove: ");
    scanf("%d", &val);
    k = removeElement(nums, n, val);
    printf("Number of elements remaining: %d\n", k);
    printf("Modified array: ");
    for (i = 0; i < k; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
