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

void insertAtHead(Node *&head , int value)
{
    //step 01 : new node creation.
    Node *newNode = new Node(value);
    //step 02 : update of newNode -> Next.
    newNode->Next=head;
    //step 03 : update of head.
    head = newNode;
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
    cout << endl<< endl;
}
int main()
{
    Node *head = NULL;
    int value;
    cout<<"Choise 1:Insertion at head"<<endl<<"Choise 2:Insertion at tail"<<endl<<"Choise 3: Exit"<<endl<<endl;
    int choice = 2;
    while(choice == 1 || choice == 2)
    {
        
        cout << "Enter the value : ";
        cin >> value;
        if(choice == 1) insertAtHead(head,value);
        else if(choice == 2) insertTail(head, value);
        
        cout << "Next choice : ";
        cin>>choice;
    }

    // insertTail(head, 1);
    // insertTail(head, 5);
    // insertTail(head, 8);
    // insertTail(head, 9);

    // Node *head = new Node();
    // Node *second = new Node();
    // Node *third = new Node();
    // Node *fourth = new Node();

    // head->value = 1;
    // second->value = 5;
    // third ->value = 8;
    // fourth ->value = 9;

    // head -> Next = second;
    // second ->Next = third;
    // third ->Next = fourth;
    // fourth ->Next = NULL;

    display(head);
    return 0;
}