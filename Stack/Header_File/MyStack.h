#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->Next = NULL;
        this->prev = NULL;
    }
};


class Stack
{
    Node *head;
    Node *top;
    int count = 0;

public:
    Stack(){
        head = NULL;
        top = NULL;
    }
    
    //------------PUSH---------------
    void push(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        top->Next = newNode;
        newNode->prev = top;
        top = newNode; // top = top->Next;
        count++;
    }
    
    
    
    
};
