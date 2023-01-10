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
    
    
    
    
    
};
