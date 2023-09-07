#include<iostream>
using namespace std;

template <class T> class showw {
    T a , b;
    public:
        showw (T p, T q){
            a = p;
            b = q;
        }
        void show (){
            cout<<a<<b;
        }
};

int main (){
    showw <int> obj(10,20);
    obj.show();

    return 0;
}