#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        // Swap arr[i] and arr[minIdx]
        temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main() {
    int i, n;
    int x[100];

    printf("Enter the size of the array (1 to 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size. Please enter a valid size between 1 and 100.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    // Call selectionSort function to sort the array
    selectionSort(x, n);

    // Print sorted array
    printf("Your array after sorting is:\n[");
    for (i = 0; i < n; i++) {
        printf("%d", x[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
