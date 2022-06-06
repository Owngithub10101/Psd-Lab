#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        string data;
        Node *next;
        Node(string x){
            data = x;
            next = NULL;
        } 
};

class Stack{
    public:
        Node* top;
    Stack(){
        top = NULL;
    }

    void push(){
        string s; cout << "Enter string : "; getline(cin, s); // "I love coding very much"
        stringstream iss(s);
        while(iss >> s){
            Node *n = new Node(s);
            if(top == NULL) top = n;
            else{
                n->next = top;
                top = n;
            }
        }
    }

    void pop(){
        Node *temp = top;
        temp = temp->next;
        delete (top);
        top = temp;
    }

    void print(){
        Node *temp = top;
        if(top == NULL){
            cout << "Stack is Empty";
            return;
        }
        while (temp != NULL){
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main(){
    Stack o;
    o.push();
    o.print();
    cout << "------" << endl;
    o.pop();
    o.pop();
    o.print();
    return 0;
}
