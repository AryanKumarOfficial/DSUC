#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

struct node *newnode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *insert(struct node *root, int key)
{
    struct node *temp = newnode(key);
    if (root == NULL)
    {
        return temp;
    }

    struct node *parent = NULL, *current = root;

    while (current != NULL)
    {
        parent = current;
        if (current->key > key)
        {
            current = current->left;
        }
        else if (current->key < key)
        {
            current = current->right;
        }
        else
        {
            return root;
        }
    }

    if (parent->key > key)
    {
        parent->left = temp;
    }
    else
    {
        parent->right = temp;
    }
    return root;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\n", root->key);
        inorder(root->right);
    }
}

int main()
{
    struct node *root = newnode(50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    inorder(root);
    return 0;
}