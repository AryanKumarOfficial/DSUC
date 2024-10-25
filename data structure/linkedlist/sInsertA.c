#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{

    struct node *newnode, *head, *temp;
    head = 0;
    int ch = 1, count = 1;

    while (ch)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data for node:\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
            count++;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
            count++;
        }

        printf("Do you want to continue insertion(0/1)");
        scanf("%d", &ch);
    }

    // insertion at any position
    
    int pos, i = 0;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data to insert:\n");
    scanf("%d", &newnode->data);
    printf("enter position to insert:\n");
    scanf("%d", &pos);

    temp = head;

    if (pos > count)
    {
        printf("Invalid position");
    }
    else
    {
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;

    temp = head;
    count = 0;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\n%d", count);

    return 0;
}