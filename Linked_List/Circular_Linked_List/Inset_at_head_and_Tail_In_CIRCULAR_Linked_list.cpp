#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
    Node(int value)
    {
        this->value = value;
        this->Next = NULL;
    }
};

void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    newNode->Next = temp;
    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }

    while (temp->Next != head)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
    head = newNode;
}
void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }
    while (temp->Next != head)
    {
        temp = temp->Next;
    }
    newNode->Next = temp->Next;
    temp->Next = newNode;
}
int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    do{
        count++;
        temp = temp->Next;
    }while(temp != head);

    return count;
}
void deleteAtHead(Node*&head){
    Node *temp = head;
    if(head != NULL && head->Next != head){
    while(temp->Next != head){
        temp = temp->Next;
    }
    Node*delNode = head;
    temp->Next = delNode->Next;
    head = delNode->Next;
    delete delNode;

    }
    else{
        if(head == NULL){
        cout<<"The linked list is empty.";
        cout<<endl;
        }
        else{
            Node*delNode = head;
            head = NULL;
            delete delNode;
        }
    }

}

void deleteAtTail(Node*&head){
    Node*temp = head;
    if(temp != NULL && temp->Next != head){
    while(temp->Next->Next != head){
        temp = temp->Next;
    }
    Node*delNode = temp->Next;
    temp->Next = temp->Next->Next;
    delete delNode;
    }
    else{
        if(temp==NULL){
            cout<<"The linked list is empty.";
            cout<<endl;
        }
        else deleteAtHead(head);
    }

}

void displayLinkedList(Node *&head)
{
    Node *temp = head;
    if (head != NULL)
    {
        do
        {
            cout << temp->value;
            temp = temp->Next;
            if (temp != head)
                cout << " -> ";
        } while (temp != head);
    }
    else
    {
        cout << "The list is empty." << endl;
    }
}
int main()
{
    Node *head = NULL;
    int value, position, choice;
    cout << "Choice 1 : Insert at Head." << endl
         << "Choice 1 : Insert at Tail." << endl
         << "Choice 3 : Delete at head." << endl
         << "Choice 4 : Delete at Tail." << endl
         << "Choice 0 : Exit." << endl;

    cout << "Next Choice : ";
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value to inset in list : ";
            cin >> value;
            insertAtHead(head, value);
            break;
        case 2:
            cout << "Enter the value to inset in list : ";
            cin >> value;
            insertAtTail(head, value);
            break;
        case 3:
            deleteAtHead(head);
            break;
        case 4:
            deleteAtTail(head);
            break;
        default:
            break;
        }
        cout << "Next Choice : ";
        cin >> choice;
    }
    cout << "The Linked list is : ";
    displayLinkedList(head);
    cout << endl;
    cout<<"Length of the list : " <<countLength(head)<<endl;

    return 0;
}