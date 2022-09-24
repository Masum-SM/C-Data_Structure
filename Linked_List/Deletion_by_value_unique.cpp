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
void deleteAtHead(Node *&head);
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

int searchInSpecificPostion(Node *head, int value)
{
    Node *temp = head;
    int index = 1;
    if (head == NULL)
        return -1;
    
    while(temp->value != value){
        if(temp->Next == NULL) return -1;
        temp = temp->Next;
        index++;
    }
    return index;
}

void deleteAtHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "The list is empty." << endl;
        return;
    }
    Node *delNode = head;
    head = delNode->Next;
    delete delNode;
}

void deleteAtTail(Node *&head)
{
    Node *temp = head;
    /*
    (head != NULL && head->Next != NULL)
    head != NULL : it need for empty list, if we did not give this condition, it won't go the else condition where head == NULL condition is checked.

    head->Next != NULL : if there is only one value then the while loop will be terminated when finding temp->Next->Next.

    */
    if (head != NULL && head->Next != NULL)
    {
        while (temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }

        Node *delNode = temp->Next;
        temp->Next = NULL;
        delete delNode;
    }
    else
    {
        if (head == NULL)
        {
            cout << "The are no value in the list." << endl;
        }
        else
        {
            deleteAtHead(head); // when haed != NULL && Temp->Next == NULL (there is only one value) then this condition is applied.
        }
    }
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
void deleteAtSpecificPosition(Node *head, int pos)
{
    int index = 1;
    Node *temp = head;
    if (head != NULL && pos <= countLength(head))
    {
        if (pos == 1)
        {
            deleteAtHead(head);
        }
        else if (pos == countLength(head))
        {
            deleteAtTail(head);
        }
        else
        {
            while (index < pos - 1)
            {
                temp = temp->Next;
                index++;
            }
            Node *delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }
    else
    {
        cout << "Position is not fount." << endl;
    }
}


void deletionByValueUnique(Node*head,int searchValue){
    int pos = searchInSpecificPostion(head, searchValue);
    if(pos == -1){
        cout<<"Value not found in the list."<<endl;
    }
    else{
        deleteAtSpecificPosition(head,pos);
    }
    
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
         << "Choise 3 :Delete by value." << endl
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
            cout << "Enter yout desigred value to delelte : ";
            cin >> value;
            deletionByValueUnique(head, value);
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