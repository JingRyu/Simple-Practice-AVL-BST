/*
Description

Using the class skeleton definition below, write the two constructors that create a new BST node that will be used
for an integer Binary Search Tree (BST). The default constructor sets the data to 0.

Note: The class fields are public only so the grader can check your code. In a real life implementation these should
be private.

Use this definition for the BST Class:

class BST
{
  public:
  int data;
  BST *left, *right;
  BST();
  BST(int);
  void insert(int);
  int nth_node(int n);
};

Here is an example call to the function

BST mytree(10);

After the above code executes the tree will have an entry for the integer 10 with left and right set to null;.

Constructor Signatures

BST();

BST (int);

File Name

bst.h

Score

There are three tests each worth 2 points

Note: You do not need to submit any other code including the main method or any print statements. ONLY the BST class is required.
Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The
above example should be used to test your code but deleted or commented out upon submission.
*/

#include <iostream>
using namespace std;

class BST
{
  public:
  int data;
  BST *left, *right;
  BST();
  BST(int n);
  void insert(int n);
  int nth_node(int n);
  //void inOrder(BST *root, int n);
};

void inOrder(BST *root, int n);
int count = 0;

BST* Root;


int counts;
int curr;

BST::BST()
{
    data = 0;
    left = NULL;
    right = NULL;
}


BST::BST(int n)
{
    data = n;
    left = NULL;
    right = NULL;
}

/*
bool Search(BST* root, int data){

    if(root == NULL){
        return false;
    }
    else if(root->data == data){
        return true;
    }else if( data <= root->data){
        return Search(root->left,data);
    }else{
        return Search(root->right,data);
    }
}*/
void BST::insert(int n)
{
        BST* root = new BST();
        //cout<<"initialleft: "<<left;

        root->data = data;
        root->left = NULL;
        root->right = NULL;
        root->left = left;
        root->right = right;

        Root = root;

        BST* ptr;

        BST* ptrParent;

        BST *newNode = new BST();

        newNode -> data = n;
        newNode -> left = NULL;
        newNode -> right = NULL;


            ptr = root;


            while( ptr != NULL)
            {
                if( n <= (ptr -> data)){
                ptrParent = ptr;
                ptr = ptr -> left;
                }else{
                ptrParent = ptr;
                ptr = ptr -> right;
                }

            }

        ptr = newNode;


        if(n <= (ptrParent -> data)){
                ptrParent -> left = newNode;}else{
            ptrParent -> right = newNode;}

        //cout<<count<<endl;
        //cout<<"ptrleft: "<<ptrParent->left<<endl;
        //cout<<"ptrright: "<<ptrParent->right<<endl;
        //cout<<"left: "<<left<<endl;

        if(left==NULL){left = root->left;}
        if(right==NULL){right = root ->right;}
        //cout<<"left: "<<left<<endl;
        //cout<<"right: "<<left<<endl;
        //count++;



}

void inOrder(BST *root, int n)
{
    if(root == NULL){return;}
    inOrder(root->left, n);
    counts++;
    //cout<<"order: "<<root->data<<endl;
    if(counts == n){curr = root->data;}
    inOrder(root->right, n);
}

int BST::nth_node(int n)
{
    counts = 0;
    inOrder(Root, n);
    return curr;
}


