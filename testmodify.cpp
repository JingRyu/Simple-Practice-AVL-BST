#include <iostream>
#include "bst.h"
using namespace std;

int main()
{
    BST node(0);


    node.insert(20);
    node.insert(30);
    node.insert(1);
    node.insert(2);
    node.insert(40);
    node.insert(69);
    node.insert(4);
    node.insert(8);
   // node.insert(-5);
   //  node.insert(-6);

    //inOrder(Root, 1);
    //int x = node.nth_node(3);

    cout<<"result: "<<node.nth_node(3)<<endl;

    cout<<"result: "<<node.nth_node(1)<<endl;

     cout<<"result: "<<node.nth_node(6)<<endl;
   //cout<<"result: "<<node.nth_node(0)<<endl;
     cout<<"result: "<<node.nth_node(1)<<endl;
     node.insert(3);
     cout<<"result: "<<node.nth_node(4)<<endl;



     BST node2(-7);
     node2.insert(-20);
    node2.insert(-3);
    node2.insert(-9);

    cout<<"result2: "<<node2.nth_node(3)<<endl;

    cout<<"result2: "<<node2.nth_node(1)<<endl;

     cout<<"result2: "<<node2.nth_node(2)<<endl;
     //cout<<"result: "<<node.nth_node(0)<<endl;
     cout<<"result2: "<<node2.nth_node(1)<<endl;

     BST node3(7);
     node3.insert(2);
    node3.insert(1);
    node3.insert(3);

    cout<<"result3: "<<node3.nth_node(3)<<endl;

    cout<<"result3: "<<node3.nth_node(1)<<endl;

     cout<<"result3: "<<node3.nth_node(2)<<endl;
     //cout<<"result: "<<node.nth_node(0)<<endl;
     cout<<"result3: "<<node3.nth_node(1)<<endl;

    /*
    cout<<Search(node.Root,5)<<endl;
    cout<<Search(node.Root,20)<<endl;
     cout<<Search(node.Root,25)<<endl;
     cout<<Search(node.Root,2)<<endl;
     cout<<Search(node.Root,6)<<endl;
     cout<<Search(node.Root,8)<<endl;
     cout<<Search(node.Root,3)<<endl;
     */





    return 0;
}
