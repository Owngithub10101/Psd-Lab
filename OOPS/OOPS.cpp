#include<bits/stdc++.h>
using namespace std;

class Complex{
private:
    int x,y;
    int xy = 34;
    // int x,y; // Or...
public:
    int xx = xy;
    int xxyy = 20;
    Complex(int xx, int yy){
          x = xx; y = yy;
    } // Constructer make anywhere inside a class...

    void print(){
        cout << x << "+i" << y << "\n" << xy << "\n"; 
    }
};

int main(){
    Complex c(2,3);
    c.print();
    cout << c.xxyy; // we can acess only public parts of the class...
    // cout << c.xy; // Inacessible(private) part of the class...
    // if you want to access the privete part of the class then first you need to make this member of public part...
    cout << '\n' << c.xx;
    return 0;
}