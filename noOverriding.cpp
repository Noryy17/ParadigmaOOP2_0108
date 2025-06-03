#include <iostream>
using namespace std;

class baseclass {
    public:
    virtual void perkenalan()final{
        cout << "Hallo Saya Function dari base class";
    }
};

class derivedclass : public baseclass {
    public:
    void perkenalan1 (){
        cout << "Hallo Saya Function dari base class";
    }
};

int main (){
    derivedclass a;
    a.perkenalan();

    return 0;
};