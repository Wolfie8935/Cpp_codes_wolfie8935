#include <iostream>
using namespace std;

class base_class {
    public:
        virtual void display () = 0;
};

class derived_class : public base_class {
    public:
        void display (){
            cout<<"Print This !!!"<<endl;
        }
};

int main (){
    derived_class dc_object; //object to derived class
    dc_object.display();
    return 0;
}