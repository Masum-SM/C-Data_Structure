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

void insertTail(Node *&head, int value)
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

void insertAtHead(Node *&head, int value)
{
    // step 01 : new node creation.
    Node *newNode = new Node(value);
    // step 02 : update of newNode -> Next.
    newNode->Next = head;
    // step 03 : update of head.
    head = newNode;
}

void insertionOnSpecificPosition(Node *&head, int position, int value)
{
    int i = 0;
    Node *temp = head;
    while (i < position - 2)
    {
        temp = temp->Next;
        i++;
    }
    Node *newNode = new Node(value);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}

int searchByValueUnique(Node *&head, int key)
{
    Node *temp = head;
    int count = 1; // loop will stop before the key.so get acctual position we start from 1.
    if (temp == NULL)
    {
        return -1;
    }

    while (temp->value != key)
    {
        if (temp->Next == NULL)
        {
            return -1;
        }
        temp = temp->Next;
        count++;
    }
    return count;
}

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
        {
            cout << " -> ";
        }
        n = n->Next;
    }
    cout << endl
         << endl;
}

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}
int main()
{
    Node *head = NULL;
    int value, position;
    cout << "Choise 1:Insertion at head" << endl
         << "Choise 2:Insertion at tail" << endl
         << "Choise 3:Insertion at specific position" << endl
         << "Choise 4:Search a value (Unique List)" << endl
         << "Choise 0: Exit" << endl
         << endl;
    cout << "Next Choice : ";
    int choice;
    cin >> choice;
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
            insertTail(head, value);
            break;
        case 3:
            cout << "Enter the desired position :";
            cin >> position;
            cout << "Enter the value : ";
            cin >> value;
            insertionOnSpecificPosition(head, position, value);
            break;
        case 4:
            cout << "Enter the value to search :";
            cin >> value;
            position = searchByValueUnique(head, value);
            if (position != -1)
            {
                cout << "The number is at position : " << position << endl;
            }
            else
            {
                cout << "The number is not yet in the list." << endl;
            }

            break;

        default:
            break;
        }

        cout << "Next choice : ";
        cin >> choice;
    }

    cout << endl
         << "Linked List : ";
    display(head);
    cout << "Length of the list " << countLength(head) << endl;
    return 0;
}