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
void insertAtHead(Node *&head);
void insertAtTail(Node *&head, int value);
void displayLinkedList(Node *head);

void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->Next = head;
    head = newNode;
}

void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

int findMidOfLinkedList(Node*head){
    if(head == NULL){
        
        return -1;
    }
    Node*slow = head;
    Node*fast = head;
    while(fast != NULL && fast->Next != NULL){
        slow = slow->Next;
        fast = fast->Next->Next;
    }
    return slow->value;
}

void displayLinkedList(Node *head)
{
    if (head == NULL)
    {
        cout << "There is no value in the list." << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        if (temp->Next != NULL)
            cout << " -> ";
        temp = temp->Next;
    }
    cout << endl
         << endl;
}

int main()
{
    Node *head = NULL;

    cout << "Choice 1 : Insert at head of linked list." << endl
         << "Choice 2 : Insert at tail of linked list." << endl
         <<"Choice 3 : Reverse linked list (Non Resursive)"<<endl
         << "Choice 0 : Exit." << endl;
    int choice;
    cout << "Enter your choice : ";
    cin >> choice;
    int value;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value : ";
            cin >> value;
            insertAtHead(head, value);
            break;
        case 2:
            cout << "Enter the value : ";
            cin >> value;
            insertAtTail(head, value);
            break;
        case 3:
            int mid;
            mid = findMidOfLinkedList(head);
            if(mid == -1){
                cout<<"The Linked list is empty."<<endl;
            }
            else{
                cout<<"Mid of Linked list is : "<<mid<<endl;
            }
        default:
            break;
        }
        cout << "Enter your choice : ";
        cin >> choice;
    }
    cout << "Linked List : ";
    displayLinkedList(head);
    cout << endl;
}