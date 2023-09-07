#include <iostream>
using namespace std;

//base class 1
class vehicle {
    public:
        vehicle (){
            cout<<"This is a vehicle"<<endl;
        }
};

//derived class 1
class car : public vehicle {
    public:
        car(){
            cout<<"This is a car"<<endl;
        }
};

//derived class 2 from derived class 1
class seat : public car {
    public:
        seat(){
            cout<<"This seat is comfy"<<endl;
        }
};

//main function
int main (){
    seat myyyyy;
    return 0;
}