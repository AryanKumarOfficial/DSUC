#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{
    struct node *newnode, *head, *temp;
    int ch = 1;
    head = 0;
    while (ch)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = 0;
        newnode->prev = 0;
        printf("Enter the data to be inserted:\n");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = temp->next;
        }

        printf("Do you want to continue ?(1/0)");
        scanf("%d", &ch);
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    return 0;
}