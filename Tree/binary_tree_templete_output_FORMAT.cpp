#include <bits/stdc++.h>
using namespace std;
/*
INPUT
total node :
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

OUTPUT
Root: 0
Left:
    Root: 1
    Left: 3
    Right: 4
Right:
    Root: 2
    Left:
        Root: 5
        Left: 7
        Right: 8
    Right: 6
*/
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
void printTree(treeNode *root, int level);
void printSpace(int level);

void printSpace(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}
void printTree(treeNode *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->value << endl;
        return;
    }
    else
    {
        cout << endl;
        printSpace(level);
        cout << "Root: " << root->value << endl;
    }

    if (root->leftChild != NULL)
    {
        printSpace(level);
        cout << "Left:";
        printTree(root->leftChild, level + 1);
    }

    if (root->rightChild != NULL)
    {
        printSpace(level);
        cout << "Right:";
        printTree(root->rightChild, level + 1);
    }
}

int main()
{
    int node;
    cout << "Enter number of node : ";
    cin >> node;

    treeNode *allNode[node];

    for (int i = 0; i < node; i++)
    {
        allNode[i] = new treeNode(-1) ;
    }

    for (int i = 0; i < node; i++)
    {
        int value, left, right;
        cin>>value>>left>>right;

        allNode[i]->value = value;

        if(left >node-1 || right > node-1){
            cout<<"Invalid Index"<<endl;
            break;
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
    printTree(allNode[0], 0);

    return 0;
}