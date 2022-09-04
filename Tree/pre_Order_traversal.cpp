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

void processPreOrder(treeNode *root , string &preOrderPattern){
    if(root == NULL){
        return;
    }
   preOrderPattern += to_string(root->value);
   processPreOrder(root->leftChild,preOrderPattern);
   processPreOrder(root->rightChild,preOrderPattern);
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

    string preOrderPattern = " ";
   processPreOrder(allNode[0],preOrderPattern);
    cout<<"Pre_Order Traversal : "<<preOrderPattern<<endl;

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
Pre_Order Traversal :  013425786

*/