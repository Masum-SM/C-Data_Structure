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

int searchPosition(int inOrder[], int current, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == current)
            return i;
      
    }
    return -1;
}

treeNode *buildTreePreIn(int preOrder[], int inOrder[], int start, int end)
{
    static int indx = 0; // static means it won't be set at 0 every recurrsive call,it contain the increased value.
    int current = preOrder[indx];
    indx++;
    treeNode *newNode = new treeNode(current);
    if (start == end)
    {
        return newNode;
    }
    int positonInOrder = searchPosition(inOrder, current, start, end);

    // for left side in in_order
    newNode->leftChild = buildTreePreIn(preOrder, inOrder, start, positonInOrder - 1);
    // for right side in in_order
    newNode->rightChild = buildTreePreIn(preOrder, inOrder, positonInOrder + 1, end);
    return newNode;
}

void processPreOrder(treeNode *root, string &preOrderPattern)
{
    if (root == NULL)
    {
        return;
    }
    preOrderPattern += to_string(root->value);
    processPreOrder(root->leftChild, preOrderPattern);
    processPreOrder(root->rightChild, preOrderPattern);
}



int levelOrderTraversal(treeNode *root, string &pattern, int k_level)
{
    if (root == NULL)
    {
        return -1;
    }
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int min_value = INT_MAX;
    while (!q.empty())
    {
        treeNode *check = q.front();
        q.pop();
        if (check != NULL)
        {
            if (level == k_level)
            {
                if (min_value > check->value)
                    min_value = check->value;
            }
            cout << check->value << " ";
            pattern += to_string(check->value);
            if (check->leftChild != NULL)
            {
                q.push(check->leftChild);
            }
            if (check->rightChild != NULL)
            {
                q.push(check->rightChild);
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
                level++;
            }
        }
    }
    return min_value;
}

int main()
{
    int node;
    cout << "Enter the number of node : ";
    cin >> node;
    int preOrder[node], inOrder[node];
    for (int i = 0; i < node; i++)
    {
        cin >> preOrder[i];
    }
    for (int i = 0; i < node; i++)
    {
        cin >> inOrder[i];
    }
    treeNode *root = buildTreePreIn(preOrder, inOrder, 0, node - 1);

    string preOrderPattern = " ";
    processPreOrder(root, preOrderPattern);
    cout << "Pre_Order Traversal : " << preOrderPattern << endl;

    return 0;
}

/*
INPUT :
9
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6

OUTPUT :

Pre_Order Traversal :  013425786  
*/