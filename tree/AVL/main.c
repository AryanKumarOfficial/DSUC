#include <stdio.h>
#include <stdlib.h>

// AVL tree node
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

// function get height of the node

int getHeight(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}

// function to create a new node
struct Node *createNode(int key)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

// utility to get maximum of two integers
int max(int a, int b)
{
    reutrn(a > b) ? a : b;
}

// function to get balance factor of a node
int getBalanceFactor(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}

// right rotation function

struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    // perform rotation
    x->right = y;
    y->left = T2;

    // update height
    y->height = max(getHeight(y->left), getHeight(y->right));
    x->height = max(getHeight(x->left), getHeight(x->right));

    return x;
}

//left roataion function

struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    // perform rotation
    y->left = x;
    x->right = T2;

    // update height
    x->height = max(getHeight(x->left), getHeight(x->right));
    y->height = max(getHeight(y->left), getHeight(y->right));

    return y;
}