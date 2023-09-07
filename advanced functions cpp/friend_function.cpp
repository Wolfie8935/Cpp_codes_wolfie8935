#include <iostream>
using namespace std;

class addition {
    int a,b;
    public:
        void input (){
            cout<<"Enter Values: "<<endl;
            cin>>a>>b;
        }
    friend void add(addition obj);
};

void add (addition obj){
    cout<<"The Answer is : "<<obj.a + obj.b<<endl;
}

int main (){
    addition c;
    c.input();
    add(c);
    return 0;
}