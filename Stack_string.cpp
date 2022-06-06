#include<bits/stdc++.h>
using namespace std;
// Competitive Programming @PSD...
// Navneet Uit-CS(B)-2nd Year...
// gcc version 9.2.0 (MinGW.org GCC Build-2)...

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
             // Or...
    Stack o; // Stack *o = new Stack();
    o.push(); // o->push();
    o.print(); // o->print();
    cout << "------" << endl;
    o.pop(); // o->pop();
    o.pop(); // o->pop();
    o.print(); // o->print();
    return 0;
}
