#include <iostream>

#include <list> //no random access //there are 2 pointers one start and one end

using namespace std;

int main (){

    cout<<"This is a sample program"<<endl;

    list <int> l; //initialize
    l.push_back(1); //puts to back to the list
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(0); //puts in front of the lit //0 1 2 3 4

    cout<<"The original list is: ";
    for (int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin()); //erases the first element //cannot do +2

    cout<<"The new list is: ";
    for (int i:l){
        cout<<i<<" ";
    }cout<<endl;  

    list <float> x(6,3.1417); //initializing another with 6 elements and 3.1417 each

    cout<<"The new og list is: ";
    for (float i:x){
        cout<<i<<" ";
    }cout<<endl; 

    x.pop_back();

    list <float> y(x); //copying x list to y

    cout<<"The final og list is: ";
    for (float i:y){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}