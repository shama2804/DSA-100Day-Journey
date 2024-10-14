#include<stdio.h>
int get(int A[], int index, int length) 
{
    if (index >= 0 && index < length)
        return A[index];
    return -1; 
}
void set(int A[], int index, int x, int length)  
{
    if (index >= 0 && index < length)
        A[index] = x;
}
int max(int A[], int length)
{
    int max = A[0];
    for (int i = 1; i < length; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}
int min(int A[], int length) 
{
    int min = A[0];
    for (int i = 1; i < length; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}
int sum(int A[], int length) 
{
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += A[i];
    }
    return total;
}
float avg(int A[], int length) 
{
    int total = sum(A, length);
    return (float)total / length;
}
int main() {
    int A[] = {1, 2, 3, 4, 5};
    int length = 5;

    printf("Max: %d\n", max(A, length));
    printf("Min: %d\n", min(A, length));
    printf("Sum: %d\n", sum(A, length));
    printf("Average: %.2f\n", avg(A, length));

    return 0;
}

/*
Max: 5
Min: 1
Sum: 15
Average: 3.00
*/
