// inorder traversing using recursive function

#include <stdio.h>
#include <stdlib.h>

// node structure for linkedlist

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

// pointer function to create a new node in the memory dynamically

struct node *newnode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// function to insert a node in a BST

struct node *insert(struct node *node, int key)
{
    if (node == NULL)
    {
        return newnode(key);
    }
    if (node->key == key)
    {
        return node;
    }

    if (node->key < key)
    {
        node->right = insert(node->left, key);
    }
    else
    {
        node->left = insert(node->left, key);
    }

    return node;
}

// inorder traversing using recursive function

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\n", root->key);
        inorder(root->right);
    }
}

// driver code

int main()
{
    // creating root node
    struct node *root = newnode(50);

    // inserting elements to the BST
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 75);
    root = insert(root, 60);
    root = insert(root, 80);

    // traversing inorder in BST
    printf("Your Binary Search tree is:\n");
    inorder(root);

    return 0;
}