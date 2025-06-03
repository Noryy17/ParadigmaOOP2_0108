#include <iostream>
using namespace std;

class abstraksiklas{
private: string x,y;

public:

void setXy(string a, string b){
    x = a;
    y = b;
}

void display(){
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

};

