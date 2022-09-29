#include<bits/stdc++.h>
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
class treeNode{
    public:
    int value;
    treeNode*leftChild;
    treeNode *rightChild;
    treeNode(int value){
        this->value = value;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};
void printSpace(int level){
    for(int i = 0 ; i < level ; i++){
        cout<<"    ";
    }
}

void printTree(treeNode *root , int level){
    if(root == NULL){
        cout<<"There is no tree"<<endl;
        return;
    }
    if(root->leftChild == NULL && root->rightChild == NULL){
        cout<<root->value<<endl;
        return;
    }
    else{
        cout<<endl;
        printSpace(level);
        cout<<"Root : "<<root->value<<endl;
    }
    if(root->leftChild != NULL){
        printSpace(level);
        cout<<"Left : ";
        printTree(root->leftChild, level+1);
    }
    if(root->rightChild != NULL){
        printSpace(level);
        cout<<"Right : ";
        printTree(root->rightChild, level+1);
    }
}

int main(){
    int number_of_nodes;
    cout<<"Enter number of Nodes : ";
    cin>>number_of_nodes;

    treeNode*allNode[number_of_nodes];

    for(int i = 0 ; i < number_of_nodes ; i++){
        allNode[i] = new treeNode(-1);
        // root/value is set to -1 and leftchild and rightChild set to NULL.
        /*
            -1 NULL NULL
            -1 NULL NULL
            -1 NULL NULL
            -1 NULL NULL
            -1 NULL NULL
            -1 NULL NULL
            -1 NULL NULL
            -1 NULL NULL
            -1 NULL NULL
        */
    }
    for(int i = 0 ; i < number_of_nodes ; i++){
        int value , left , right;
        cin>>value>>left>>right;
        allNode[i]->value = value;
        // it is possible cz value is int , there is no pointer.
            if(left >number_of_nodes-1 || right > number_of_nodes-1){
            cout<<"Invalid Index"<<endl;
            break;
        }
        if(left != -1){
            allNode[i]->leftChild = allNode[left];
            /* 
            // here, left number address of allNode is assigned in allNode[i]->leftChild

            // allNode[i]->leftChild = left; it is not possible cz leftChild is pointer value.
       
            cout<<&allNode[1]->value<<" "<<allNode[0]->leftChild<<endl;
            cout<<&allNode[2]->value<<" "<<allNode[0]->rightChild<<endl;
            0x10115c8 0x10115c8
            0x10115e0 0x10115e0
            here leftChild of 0 == address of allNode[1]->value.
            */  
        }
        if(right != -1){
            allNode[i]->rightChild = allNode[right];
        }
    }
    printTree(allNode[0], 0);
    return 0;
}
