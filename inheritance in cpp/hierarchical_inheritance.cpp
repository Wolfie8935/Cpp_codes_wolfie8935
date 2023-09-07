#include <iostream>
using namespace std;

//base class
class vehicle {
    public:
        vehicle(){
            cout<<"This is a vehicle"<<endl;
        }
};

//derived class 1
class car : public vehicle {
    public:
        car(){
            cout<<"This is a confy car"<<endl;
        }
};

//derived class 2
class bus : public vehicle {
    public:
        bus(){
            cout<<"A comfy bus if i say so"<<endl;
        }
};

//main class
int main (){
    car A;
    bus B;
    return 0;
}