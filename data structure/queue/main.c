// Static linear Queue
#include <stdio.h>

int main()
{
    int list[10];
    int ch, rear, front, item, n;
    ch = 1; // for loop
    rear = -1;
    front = -1;
    n = 10; // length of the queue
    while (ch == 1)
    {
        printf("Enter the element to insert in Queue...\n");
        scanf("%d", &item);

        if (rear == -1 && front == -1)
        {
            front = rear = 0;
            list[rear] = item;
        }
        else if (rear < n - 1)
        {
            rear++;
            list[rear] = item;
        }
        else
        {
            return -1;
        }
        printf("Do you want to continue insertion(0/1): ");
        scanf("%d", &ch);
    }
    rear = front;

    printf("\nElements of queue are as:\n\n");
    while (rear < n - 1)
    {

        printf("%d", list[rear]);
        rear++;
    }

    return 0;
}