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

int levelOrderTraversal(treeNode *root, string &pattern,int k_level){
    if(root == NULL){
        return -1;
    }
    queue<treeNode *>q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int max_value = INT_MIN;
    while(!q.empty()){
        treeNode *check = q.front();
        q.pop();
        if(check != NULL){
            if(level == k_level){
                if(max_value < check->value) max_value = check->value;
            }
            cout<<check->value<<" ";
            pattern +=to_string(check->value);
            if(check->leftChild != NULL){
                q.push(check->leftChild);
            }
            if(check->rightChild != NULL){
                q.push(check->rightChild);
            }
        }else{
            if(!q.empty()){
                q.push(NULL);
                level++;
            }
        }

    }
    return max_value;

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

    string levelOrderPattern = " ";
    int level_number;
    cout<<"Enter the level number from which you want the maximum value : ";
    cin>>level_number;
    int max_value = levelOrderTraversal(allNode[0],levelOrderPattern,level_number);
    cout<<endl;
    cout<<"Level_Order Traversal : "<<levelOrderPattern<<endl;
    cout<<"Maximum value at "<<level_number<<" level  : "<<max_value<<endl;

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