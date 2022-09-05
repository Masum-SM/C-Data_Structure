#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int value;
    treeNode *leftChild;
    treeNode *rightChild;

    treeNode(int value)
    {
        this->value = value;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};



void printLeaves(treeNode *root)
{
    if(root == NULL) return;
    if(root->leftChild == NULL && root->rightChild == NULL){
        cout<<root->value<<" ";
        return;
    }
    printLeaves(root->leftChild);
    printLeaves(root->rightChild);
}


void printLeftNonLeaves(treeNode *root)
{
    if(root == NULL) return;

    if(root->leftChild != NULL){
        cout<<root->value<<" ";
        printLeftNonLeaves(root->leftChild);
    }

    else if(root->rightChild != NULL){
        cout<<root->value<<" ";
        printLeftNonLeaves(root->rightChild);
    }
}

void printRightNonLeaves(treeNode *root)
{
    if(root == NULL) return;

    if(root->rightChild != NULL){
        cout<<root->value<<" ";
        printLeftNonLeaves(root->rightChild);
    }
   
    else if(root->leftChild != NULL){
            cout<<root->value<<" ";
            printLeftNonLeaves(root->leftChild);
    }
    

}

void boundaryTraversal(treeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout<<root->value<<" ";
    // Left Boundary Non-leaves
    printLeftNonLeaves(root->leftChild);
    // Left Boundary leaves
    printLeaves(root->leftChild);
    // Right Boundary leaves
    printLeaves(root->rightChild);
    // Right Boundary Non-leaves
    printRightNonLeaves(root->rightChild);
}

int main()
{
    int node;
    cout << "Enter the number of node : ";
    cin >> node;
    treeNode *allNode[node];

    for (int i = 0; i < node; i++)
    {
        allNode[i] = new treeNode(-1);
    }

    for (int i = 0; i < node; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        allNode[i]->value = value;
        if (left > node - 1 || right > node - 1)
        {
            cout << "Invalid Index" << endl;
        }
        if (left != -1)
        {
            allNode[i]->leftChild = allNode[left];
        }
        if (right != -1)
        {
            allNode[i]->rightChild = allNode[right];
        }
    }

   boundaryTraversal(allNode[0]);

    return 0;
}

/*
INPUT :
9
0  1  2
1  3  4
2  5  6
3 -1 -1
4 -1 -1
5  7  8
6 -1 -1
7 -1 -1
8 -1 -1

OUTPUT :
level Order Traversal :  0 1 2 3 4 5 6 7 8

*/