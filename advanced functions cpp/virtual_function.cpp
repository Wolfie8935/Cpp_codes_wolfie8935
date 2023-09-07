#include <iostream>
using namespace std;

class base_class {
    public:
        virtual void display (){
            cout<<"Dont print this !!!"<<endl;
        }
};

class derived_class : public base_class {
    public:
        void display (){
            cout<<"Print This !!!"<<endl;
        }
};

int main (){
    base_class *base_ptr; //base class pointer is made in this
    derived_class dc_object; //object to derived class
    base_ptr = &dc_object; //all the things in derived class that address is moved to base class
    base_ptr -> display(); //well we are calling the display function of it
    return 0;
}