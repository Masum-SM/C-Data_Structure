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
/*
Initially it contains some garbage value . SO, in order to Create a linked List (Single) we need to initialize it to NULL.
Whenever we are creating a linked list, we have to initialize it and since it doesn't have any nodes in the start 
(empty linked list in the beginning), the start/head points to null.
Zero is an invalid address. 
A pointer variable equal to null with address null means that the pointer variable variable does not point to a valid memory location.
*/
    cout << "Choice 1 : Insert at head of linked list." << endl
         << "Choice 2 : Insert at tail of linked list." << endl
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