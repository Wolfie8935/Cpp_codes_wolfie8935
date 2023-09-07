#include <iostream>
using namespace std;

template <class T> class show {
    T a,b;
    public:
        show(T p, T q){
            a = p;
            b = q;
        }
        void snow (){
            cout<<a<<b;
        }
};

int main (){
    show <int> ob(10,20);
    ob.snow();
    return 0;
}