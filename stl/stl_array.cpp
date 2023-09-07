#include <iostream>

#include <array> // stl based on basic array

using namespace std;

int main(){

    cout<<"Hi, This is a Test code"<<endl;
    array<int,4> a = {1,2,3,4};

    int size = a.size();

    for(int i=0; i<size; i++){
        cout<<a[i]<<endl; //can be accessed using {[]}
    }

    cout<<"The first element is: "<<a.front()<<endl; //first element
    cout<<"The last element is: "<<a.back()<<endl; //last element
    cout<<"The element at index 2 is: "<<a.at(2)<<endl; //at any index
    cout<<"Is the array empty: "<<a.empty()<<endl; //empty or not {0,1}
    

    return 0;
}