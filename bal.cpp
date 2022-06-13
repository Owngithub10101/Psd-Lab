#include<iostream>
using namespace std;
// Competitive Programming @PSD...
// Navneet Uit-CS(B)-2nd Year...
// gcc version 9.2.0 (MinGW.org GCC Build-2)...

class Node{
	public:
	char data;
	Node* next;
	Node(char x){
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
		void push(char x){
			Node* n = new Node(x);
			if(top == NULL){
				top = n;
			}else{
				n->next = top;
				top = n;
			}
		}
		
		void Pop(){
			Node* temp = top;
			temp = temp->next;
			delete(top);
			top = temp;
		}
		void print(){
			Node* temp = top;
			if(top == NULL){
				cout << "Stack is Empty";
				return;
			}
			while(temp != NULL){
				cout << temp->data << " ";
				temp = temp->next;
			}
		}
        bool isempty(){
            if(top == NULL) return true; 
            else return false;
        }
		void Balencing(string s){
			int x = s.length();
			int ct = 0;
            if(!s.length()) {
                cout << "Empty String.." << endl;
                return;
            }
			for(int i = 0; i < x; ++i){
                if(s[i]=='[' || s[i]=='{' || s[i]=='(') {push(s[i]); ct++;}
                if(s[i]==']' || s[i]=='}' || s[i]==')'){
                    if(isempty()){
                        cout << "Unbalenced.." << endl; 
                        return;
                    }
                    else{
                        if(s[i]==']' && top->data=='[') {Pop(); ct--;}
                        else if(s[i]=='}' && top->data=='{') {Pop(); ct--;}
                        else if(s[i]==')'&& top->data=='(') {Pop(); ct--;}
                    }
                }
                
            }
			if(ct == 0) cout << "String is balenced.." << "\n";
			else cout << "Unbalenced.." << "\n";
		}
};

int main(){
	Stack *st = new Stack();
	string s; cout << "Enter string : "; getline(cin, s);
    st->Balencing(s);
    return 0;
}
