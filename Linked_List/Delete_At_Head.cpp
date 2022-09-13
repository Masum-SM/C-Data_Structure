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

void insertAtHead(Node *&head, int value);
void insertAtTail(Node *&head, int value);
void deleteAtHead(Node*&head);
int countLength(Node *head);
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
void deleteAtHead(Node*&head){
    if(head == NULL){
        cout<<"The list is empty."<<endl;
        return;
    }
    Node*delNode = head;
    head = delNode->Next;
    delete delNode;
}
void displayLinkedList(Node *head)
{
    if (head == NULL)
    {
        cout << "No value in the list." << endl;
    }
    while (head != NULL)
    {
        cout << head->value;
        if (head->Next != NULL)
        {
            cout << " -> ";
        }
        head = head->Next;
    }
    cout << endl
         << endl;
}

int countLength(Node *head)
{
    if (head == NULL)
    {
        return -1;
    }
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->Next;
        count++;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    cout << "Choice 1 : Insert at head of linked list." << endl
         << "Choice 2 : Insert at tail of linked list." << endl
         << "Choise 3 :Delete at head." << endl
         << "Choice 0 : Exit." << endl;
    int value, pos;
    int choice;
    cout << "Enter Your Choice : ";
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter The Value : ";
            cin >> value;
            insertAtHead(head, value);
            break;
        case 2:
            cout << "Enter The Value : ";
            cin >> value;
            insertAtTail(head, value);
            break;

        case 3:
            deleteAtHead(head);
            break;

        default:
            break;
        }
        cout << "Enter Your Choice : ";
        cin >> choice;
    }
    cout << endl;
    cout << "Linked List : ";
    displayLinkedList(head);
    cout << endl;
    cout << "Length of list : " << countLength(head);
    cout << endl;

    return 0;
}