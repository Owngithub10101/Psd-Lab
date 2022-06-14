#include<bits/stdc++.h>
using namespace std;
// @.Initializer List...
class Point{
private:
    int x, y;
public:
    Point(int xx, int yy):x(xx),y(yy)
    {
        // ....
    }

    Point():x(0),y(0)
    {
        // ....
    }

    void print(){
        cout << "(" << x << "," << y << ") ";
    }

};

int main(){
    Point p1,p2(2,3);
    p1.print();
    p2.print();
    printf("\n");
    Point *p = new Point(); // if we pass nothing (Line:2)...
    // p : pointer for class_member...
    p->print(); 
    Point *pt = new Point(4,5); // When we pass arguments (Line:1)...
    pt->print();
    return 0;
}