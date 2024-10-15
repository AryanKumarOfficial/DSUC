#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insertAtEnd(struct node *last, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    if (last == NULL)
    {
        last = newnode;
        newnode->next = last;
    }
    else
    {
        newnode->next = last->next;
        last->next = newnode;
        last = newnode;
    }
    return last;
}

void display(struct node *last)
{
    if (last == NULL)
    {
        printf("List is empty:\n");
        return;
    }
    struct node *temp;
    temp = last->next;

    do
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("\n");
}

int main()
{
    struct node *last = NULL;
    last = insertAtEnd(last, 10);
    last = insertAtEnd(last, 20);
    last = insertAtEnd(last, 30);

    printf("Circular linkedlist:\n");
    display(last);
    return 0;
}