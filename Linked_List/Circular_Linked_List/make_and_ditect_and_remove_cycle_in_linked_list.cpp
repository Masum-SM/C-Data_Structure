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

void makecycleInLinkedList(Node *&head, int pos)
{
    Node *temp = head;
    Node *startNode;
    int count = 1;
    while (temp->Next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->Next;
        count++;
    }
    temp->Next = startNode;
}

bool ditectCycleInLinkedList(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->Next != NULL)
    {
        slow = slow->Next;
        fast = fast->Next->Next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    do
    {
        slow = slow->Next;
        fast = fast->Next->Next;
    } while (slow != fast);
    fast = head;
    while (slow->Next != fast->Next)
    {
        slow = slow->Next;
        fast = fast->Next;
    }
    slow->Next = NULL;
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
         << "Choice 3 : Make cycle in liked list." << endl
         << "Choice 4 : Ditect cycle in liked list." << endl
         << "Choice 5 : remove cycle from liked list." << endl
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
            int pos;
            cout << "Enter the postion you want to create cycle : ";
            cin >> pos;
            makecycleInLinkedList(head, pos);
            break;
        case 4:
            bool cycleStatus;
            cycleStatus = ditectCycleInLinkedList(head);
            if (cycleStatus == true)
            {
                cout << "There is cycle in the list." << endl;
            }
            else
            {
                cout << "There is no cycle in the list." << endl;
            }
            break;
        case 5:
            cycleStatus = ditectCycleInLinkedList(head);
            if (cycleStatus == true)
            {
                removeCycle(head);
            }
            else
            {
                cout << "There is no cycle in the list." << endl;
            }
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
    return 0;
}