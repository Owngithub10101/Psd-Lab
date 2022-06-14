#include<bits/stdc++.h>
using namespace std;
/* thw way of initializing the member of a class
By Constructor
By Initializer List */

// @.Constructor...
class Point{
private:
    int x, y;
public:
    Point(int xx, int yy){ // Line:1
        x = xx; y = yy;
    }

    Point(){ // Line:2
        x = 0; y = 0;
    }

    void print(){
        cout << "(" << x << "," << y << ") ";
    }

};

int main(){
    Point p1,p2(2,3);
    p1.print();
    p2.print();
    cout << '\n';
    Point *px,*py = new Point(4,8);
    px->print();
    py->print();
    cout << '\n';
    Point *p = new Point(); // if we pass nothing (Line:2)...
    // p : pointer for class_member...
    p->print(); 
    Point *pt = new Point(4,5); // When we pass arguments (Line:1)...
    pt->print();
    return 0;
}