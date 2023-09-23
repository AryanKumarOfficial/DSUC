#include <stdio.h>

int main()
{
    int i, j, n, temp;
    int x[100];

    printf("Enter the size of the array (1 to 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid array size. Please enter a valid size between 1 and 100.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                // Swap x[j] and x[j + 1]
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Your array after sorting is:\n[");
    for (i = 0; i < n; i++)
    {
        printf("%d", x[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
