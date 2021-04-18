/*
Description

Using the node definition below, write a function that creates a new node for an AVL
tree that stores integers. Left, right should be set to null and the height should be
set to 1.

Use this definition for the nodes in the AVL tree:

class Node
{
  public:
  int key;
  Node *left;
  Node *right;
  int height;
};

The Node is defined in a header file called cpluspluslabs.h that you should include in
your code but not upload in your solution.

Here is an example call to the function

Node *root = new_node(10);

After the above code executes the tree will have the value 10 in it..




Function Signature

Node* new_node(int key);

File Name

avl.cpp

Score

There are three tests each worth 2 points

Note: You do not need to submit any other code including the main method or any print statements.
ONLY the new_node function is required. Otherwise, the autograder will fail and be unable to grade
your code. (I.e., do not include the above example in your code.) The above example should be used
to test your code but deleted or commented out upon submission.
*/

#include <iostream>
#include "cpluspluslabs.h"
#include <cmath>
using namespace std;

/*
Node* new_node(int key)
{
    Node* newRoot =new Node();
    newRoot -> key = key;
    newRoot -> left = NULL;
    newRoot -> right = NULL;
    newRoot -> height = 1;
    return newRoot;
}*/


Node* insertnb(Node* node, int key)
{
    if(node == NULL)
    {
    Node* newNode = new Node();
    newNode -> key = key;
    newNode -> left = NULL;
    newNode -> right = NULL;
    newNode -> height = 1;
    node = newNode;}else
    {
        if( key <= node->key)
        {
            node->left = insertnb( node->left, key );
            (node -> height)++;
        }else{
            node->right = insertnb( node->right, key);
            (node -> height)++;
        }
    }
    return node;
}

int findmaxHeight(Node *x)
{
    if(x == NULL){return -1;}else{return max(findmaxHeight(x->left),findmaxHeight(x->right))+1;}
}

int get_balance(Node *x)
{
    if(x==NULL){return 0;}else{
    return findmaxHeight(x->left)-findmaxHeight(x->right);}
}

Node* right_rotate(Node *z)
{
    Node* y = z->left;
    Node* T3 = y->right;

    y->right = z;
    z->left = T3;

    //y->height = findmaxHeight(y);
    //z->height = findmaxHeight(z);

    return y;
}

Node* left_rotate(Node *z)
{
    Node* y = z->right;
    Node* T2 = y->left;

    y->left = z;
    z->right = T2;

    //y->height = findmaxHeight(y);
    //z->height = findmaxHeight(z);

    return y;
}

Node* newNode(int value)
{
    Node* newNode = new Node();
    newNode -> key = value;
    newNode -> left = NULL;
    newNode -> right = NULL;
    newNode -> height = 1;
    return newNode;
}

Node* insert(Node* node, int key)
{

        if( node == NULL ){
            return newNode(key);
        }

        if( key <= node->key)
        {
            node->left = insert(node->left,key);
        }else{
            node->right = insert(node->right,key);
        }






    int balance = get_balance(node);



    if(balance>1 && key<=node->left->key)
    {
        return right_rotate(node);
    }

    if(balance<-1 && key>=node->right->key)
    {
        return left_rotate(node);
    }

    if(balance>1 && key>=node->left->key)
    {
        node->left = left_rotate(node->left);
        return right_rotate(node);
    }

    if(balance<-1 && key<=node->right->key)
    {
        node->right = right_rotate(node->right);
        return left_rotate(node);
    }

    return node;

}

/*
int main()
{
    Node *root = insert(NULL, 10);
     cout<<root->key<<endl;


    root = insert(root, 20);

    root = insert(root, 30);

    root = insert(root, 40);

    root = insert(root, 50);
    //cout<<root;

    root = insert(root, 25);
     cout<<root->key<<endl;



    return 0;

}*/


