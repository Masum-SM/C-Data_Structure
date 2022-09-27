#include<bits/stdc++.h>
using namespace std;
class doublyNode{
    public:
    int value;
    doublyNode* Prev;
    doublyNode* Next;

    doublyNode(int value){
        this->value = value;
        this->Prev = NULL;
        this->Next = NULL;
    }
};

void insertAtHead(doublyNode *&head,int value){
    doublyNode*newNode = new doublyNode(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    head->Prev = newNode;
    newNode->Next = head;
    head = newNode;
}

void insertAtTail(doublyNode *&head,int value){
    doublyNode*temp = head;
    doublyNode*newNode = new doublyNode(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    while(temp->Next != NULL){
        temp = temp->Next;
    }
    temp->Next = newNode;
    newNode->Prev = temp;
}

void displayReverse(doublyNode *&head){
    doublyNode*temp = head;
    while(temp->Next != NULL){
        temp = temp->Next;
    }
    while(temp != NULL){
        cout<<temp->value;
        if(temp->Prev != NULL ){
            cout<<" -> ";
        }
        temp = temp->Prev;
    }
    cout<<endl;
}
void displaydoublyList(doublyNode*head){
    doublyNode*temp = head;
    if(temp != NULL){
        while(temp!=NULL){
            cout<<temp->value;
            if(temp->Next != NULL){
                cout<<" -> ";
            }
            temp = temp->Next;
        }
    }
    else{
        cout<<"List is empty."<<endl;
    }
}

int countLength(doublyNode *&head){
    doublyNode*temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp->Next;
        count++;
    }
    return count;
}

int main(){
    doublyNode *head = NULL;
    int value;
    cout<<"Choice 1 : Insert At Head."<<endl
    <<"Choice 2 : Insert At Tail."<<endl
    <<"Choise 3 : Display Reverse Order"<<endl;
    cout<<"Next Choice : ";

    int choice;
    cin>>choice;
    while(choice != 0){
        switch (choice)
        {
        case 1:
            cout<<"Enter the value : ";
            cin>>value;
            insertAtHead(head,value);
            break;
        case 2:
            cout<<"Enter the value : ";
            cin>>value;
            insertAtTail(head,value);
            break;
        case 3 :
            displayReverse(head);
            break;
        default:
            break;
        }
        cout << "Next choice : ";
        cin >> choice;
    }
    cout<<endl<<"Doubly Linked List : ";
    displaydoublyList(head);
    cout<<endl;
    cout<<"Length of the list : "<<countLength(head);
    cout<<endl;
    

    return 0;
}