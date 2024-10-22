#include<stdio.h>
void main()
{
    int A[100];
    int i, length, index, x;
    printf("Enter the total number of elements present before the new insertion:\t");
    scanf("%d", &length);
    printf("Enter the elements:\n");
    for(i = 0; i < length; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the index where you want to insert the new element:\t");
    scanf("%d", &index);
    printf("Enter the element:\t");
    scanf("%d", &x);
    for(i = length; i > index; i--)
    {
        A[i] = A[i - 1];
    }
    A[index] = x;
    length++;
    printf("Array after insertion:\n");
    for(i = 0; i < length; i++)
    {
        printf("%d ", A[i]);
    }
}

/*Enter the total number of elements present before the new insertion:	5
Enter the elements:
1 2 4 5 6
Enter the index where you want to insert the new element:	2
Enter the element:	3
Array after insertion:
1 2 3 4 5 6 */
