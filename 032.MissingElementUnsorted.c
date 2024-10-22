#include <stdio.h>
#define MAX 100

int main() {
    int n,A[1000],H[MAX],l,h,i;
    
    for(i = 0; i < MAX; i++) 
    {
        H[i] = 0;
    }
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&A[i]);
    }
    printf("Enter the least and the highest number from the list of given values\n");
    scanf("%d%d",&l,&h);
    for(i=0;i<n;i++)
    {
        if(A[i]>=l && A[i]<=h)
        {
            H[A[i]]=1;//To mark all the elements which are present as 1
        }
    }
    printf("The missing elements from the range %d and %d\n",l,h);
    for(i=l;i<=h;i++)
    {
        if(H[i]==0)
        {
         printf("%d ", i);  // Element is missing
        }
    }
    printf("\n");
}
