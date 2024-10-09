#include<stdio.h>
void main()
{
    int A[100];
    int i, length, index, key;
    int found = 0;
    printf("Enter the total number of elements: ");
    scanf("%d",&length);
    printf("Enter the elements:\n");
    for(i = 0; i<length; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(i = 0; i<length; i++)
    {
        if(key==A[i])
        {
            printf("Element found at index: %d\n",i);
            found=1;
            break; 
        }
    }
    
    if(!found)
    {
        printf("Element not found\n");
    }
}
/*
Enter the total number of elements: 10
Enter the elements:
1 4 7 13 87 3 65 76 88 3
Enter the element to be searched: 3
Element found at index: 5
*/
