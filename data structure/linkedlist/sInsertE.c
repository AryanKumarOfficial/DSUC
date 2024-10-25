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
    int ch = 1;

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
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue insertion(0/1)");
        scanf("%d", &ch);
    }

    // insertion at end
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = 0;
    printf("Enter the data to insert:\n");
    scanf("%d", &newnode->data);
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;

    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    return 0;
}