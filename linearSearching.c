#include <stdio.h>

int main()
{
    int i, n, x, c = 0;

    // initializing th array

    printf("Enter the size of the array\n");
    scanf("%d", &x);

    if (x <= 0 || x > 100)
    {
        printf("Invalid array size. Please enter a size between 1 and 100.\n");
        return 1; // Exit with an error code
    }

    int arr[100];

    printf("Enter the elements of the array\n");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printing the array

    printf("Array elements are: ");
    printf("[");
    for (i = 0; i < x; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\b]\n");
    printf("\n");

    // taking the input for searching

    printf("Enter the number you want to search for\n");
    scanf("%d", &n);

    // searching for the element in the array

    for (i = 0; i < x; i++)
    {
        if (n == arr[i])
        {
            c++;
            printf("%d found at index %d\n", n, i);
        }
    }

    // displaying the result

    if (c == 0)
    {
        printf("%d not found in the array\n", n);
    }
    else
    {
        printf("%d found in the array %d times\n", n, c);
    }
    getchar();
    return 0;
}
