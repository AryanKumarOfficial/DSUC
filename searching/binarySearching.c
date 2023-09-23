#include "stdio.h"

int main()
{
    int i, s, e, mid, n, val;

    // array initialization

    printf("Enter the size of the array\n");
    scanf("%d", &n);
    if (n <= 0 || n > 100)
    {
        printf("Invalid Array size.Please enter a number between 0 and 100.\n");
        return 1;
    }

    int x[100];

    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("\n");
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\b]");

    // search for the element in the array

    printf("\nEnter the number you want to search for\n");
    scanf("%d", &val);
    s = 0;
    e = n - 1;
    mid = (s + e) / 2;

    while ((s <= e) && (val != x[mid]))
    {
        if (val < x[mid])
            e = mid - 1;
        else
            s = e + 1;
        mid = (s + e) / 2;
    }

    // Output results

    if (val == x[mid])
        printf("\n %d is found at position %d\n", val, mid);
    else
        printf("\n %d is not found in the array\n", val);
    return 0;
}