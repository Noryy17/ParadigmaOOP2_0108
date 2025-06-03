#include <iostream>
using namespace std;

class baseclass {
    public:
    virtual void perkenalan(){
        cout << "Hallo Saya Function dari base class";
    }
};

class baseclass1 {
    public:
    virtual void perkenalan(){
        cout << "Hallo Saya Function dari base class";
    }
};

class derivedclass : public baseclass1 {
    public:
    void perkenalan(){
        cout << "Hallo Saya Function dari base class";
    }
};

int main (){
    derivedclass a;
    a.perkenalan();

    return 0;
};