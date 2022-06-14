#include<bits/stdc++.h>
using namespace std;
// @.Without Initializer List...
class Test{
public:
    Test(int x){cout << "Prameterize Constructor, " << x << endl;}
    Test(){cout << "Default Constructor" << endl;}
};

class Main{
    Test t;
public:
    // Main(){
    //     t = Test(31); 
    //     /* 
    //     O/P : 
    //     Default Constructor
    //     Prameterize Constructor, 31
    //     */
    // }

    Main():t(10){ // Or...
        // ....
    }
    /* 
    O/P : 
    Prameterize Constructor, 10
    */
};


int main(){
    Main m;
    return 0;
}