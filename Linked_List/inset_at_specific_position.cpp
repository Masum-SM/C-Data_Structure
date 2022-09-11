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
void insertAtSpecificPosition(Node *&head, int pos, int value);
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

void insertAtSpecificPosition(Node *&head, int pos, int value)
{
    Node *temp = head;
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->Next;
        i++;
    }
    Node *newNode = new Node(value);
    newNode->Next = temp->Next;
    temp->Next = newNode;
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

int main()
{
    Node *head = NULL;
    cout << "Choice 1 : Insert at head of linked list." << endl
         << "Choice 2 : Insert at tail of linked list." << endl
         << "Choice 3 : Insert at specific position of linked list." << endl
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
            cout << "Enter The position : ";
            cin >> pos;
            cout << "Enter The Value : ";
            cin >> value;
            insertAtSpecificPosition(head, pos, value);
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

    return 0;
}