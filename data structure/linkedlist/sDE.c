#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{

    struct node *newnode, *head, *temp, *prev;
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

    // deletion at end

    temp = head;
    while (temp->next->next != 0)
    {
        temp = temp->next;
    }
    prev = temp->next;
    temp->next = 0;
    free(prev);
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    return 0;
}