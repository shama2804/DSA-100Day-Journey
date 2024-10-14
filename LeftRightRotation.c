#include <stdio.h>

void rotateLeft(int arr[], int n, int d) {
    d = d % n; 
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

void rotateRight(int arr[], int n, int d) {
    d = d % n; 
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, d, choice;
    int A[1000];
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the number of positions to rotate: \n");
    scanf("%d", &d);
    printf("Enter 1 for left rotation or 2 for right rotation: \n");
    scanf("%d", &choice);
    if (choice == 1) {
        rotateLeft(A, n, d);
        printf("Array after left rotation: ");
    } else if (choice == 2) {
        rotateRight(A, n, d);
        printf("Array after right rotation: ");
    } else {
        printf("Invalid choice!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
