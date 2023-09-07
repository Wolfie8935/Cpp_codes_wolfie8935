#include <iostream>
using namespace std;

//base class 1
class vehicle {
    public:
        vehicle (){
            cout<<"This is a vehicle \n";
        }
};

//base class 2
class fare {
    public:
        fare(){
            cout<<"Your total fare is 1000 rs\n";
        }
};

//Derived class from bc1
class car : public vehicle , public fare {
    public:
        car(){
            cout<<"Car Incoming: \n";
        }
};

class seat : public car {
    public:
        seat(){
            cout<<"comfy seat\n";
        }
};

int main (){
    seat A;
    return 0;
}