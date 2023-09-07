#include <iostream>

#include <deque> //dynamic //can add from start as well as end //the capacity always remains the same

using namespace std;

int main (){

    cout<<"This is a test code"<<endl;

    deque <int> d; //initialization
    d.push_back(1); //puts element at back
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(0); //puts element at front //0 1 2 3 4 

    cout<<"The series d is: ";
    for (int i : d){
        cout<<i<<" ";
    }cout<<endl;

    d.at(2) = 8; // random access and changin the element at 2nd index to 8 //0 1 8 3 4

    cout<<"The new series d is: ";
    for (int i : d){
        cout<<i<<" ";
    }cout<<endl;

    d.erase(d.begin() , d.begin()+3); //erase command and we have to give the starting
                                        // and the ending limit from where to where
                                        // upper limit does not count

    cout<<"The new new series d is: ";
    for (int i : d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front(); // removes the first element
    d.pop_back(); //removes the last element

    cout<<"The final series d is: ";
    for (int i : d){
        cout<<i<<" ";
    }cout<<endl;    


    cout<<"The size of the series d is: "<<d.size()<<endl; //gives the size of the deque 

    return 0;
}