#include <iostream>
using namespace std;

//base class 
class vehicle {
    public: 
        vehicle(){
            cout<<"Maruti Suzuki";
        }        
};

//derived class
class derived : public vehicle {

};

int main (){
    derived car;
    return 0;
}