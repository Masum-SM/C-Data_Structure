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


int countLength(Node* &head)
{
    int count = 0;
    Node* temp = head;
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
    int value;
    cout<<"Choise 1:Insertion at head"<<endl<<"Choise 2:Insertion at tail"<<endl<<"Choise 0: Exit"<<endl<<endl;
    cout<<"Next Choice : ";
    int choice ;
    cin>>choice;
    while(choice != 0)
    {
        cout << "Enter the value : ";
        cin >> value;
        switch (choice)
        {
        case 1:
            insertAtHead(head,value);
            break;
        case 2:
            insertTail(head, value);
            break;
        
        default:
            break;
        }

        cout << "Next choice : ";
        cin>>choice;
    }


    cout<<endl<<"Linked List : ";
    display(head);
    cout<<"Length of the list "<<countLength(head)<<endl;
    return 0;
}