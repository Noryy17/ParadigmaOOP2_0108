#include <iostream>
using namespace std;

class seseorang {
    public:
    virtual void pesan () = 0;
};

class joko : public seseorang {
    public:
    void pesan (){
        cout << "Pesan dari joko" << endl;
    }
};

class lia :public seseorang{
    public:
    void pesan(){
        cout << "Pesan Dari lia" <<endl;
    }
};

int main (){
    seseorang* obyek;
    joko a;
    lia b;
}