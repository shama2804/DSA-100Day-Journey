#include<stdio.h>
int main()
{
    int A[100];
    int n,key,h,l,mid;
    printf("Enter the number of elements you want to include in the array: ");
    scanf("%d",&n);
    printf("Enter the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the key value: ");
    scanf("%d",&key);
    l=0;
    h=n;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            printf("Search successful\n");
            printf("Index: %d",mid);
            return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    printf("Search unsuccessful, key not found.\n");
    return -1;
}

/*
Enter the number of elements you want to include in the array: 20
Enter the array: 2 4 6 8 9 10 16 18 19 20 22 25 28 29 30 32 34 35 38 39
Enter the key value: 22
Search successful
Index: 10
  */
