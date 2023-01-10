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
        //------------POP---------------
    int pop()
        {
            Node *delNOde;
            delNOde = top;
            int check = -1;
            if(head == NULL){   // If stack is empty.
                cout<<"Stack Underflow."<<endl;
                return check;
            }
            if (top == head)   //If there is only one element.
            {
                head = top = NULL;
            }
            else  // If there is only one element.
            {
                top = delNOde->prev;
                top->Next = NULL;
            }
            check = delNOde->value;
            delete delNOde;
            count--;
            return check;
        }

        //------------EMPTY--------------
        bool empty(){
            if(head == NULL) return true;
            else return false;
        }

        //-----------------SIZE-----------
        int size(){
            return count;
        }
        //----------------TOP------------

        int Top(){
            int chk;
            if(top == NULL){
               cout<<"Stack Underflow. There is no value in Top."<<endl;
               chk = -1;
            }
            else{
                chk = top->value;
            }
            return chk;
        }

    
};
