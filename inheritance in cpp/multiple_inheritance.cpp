#include <iostream>
using namespace std;

//base class 1
class vehicle {
    public:
        vehicle(){
            cout<<"This is a vehicle"<<endl;
        }
};

//base class 2
class fourwheeler {
    public:
        fourwheeler(){
            cout<<"This is a four wheel car"<<endl;
        }
};

//sublclass
class derived :public vehicle, public fourwheeler {
};

int main(){
    derived car,bus;
    return 0;
}