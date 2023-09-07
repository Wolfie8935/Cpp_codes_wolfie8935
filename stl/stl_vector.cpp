#include <iostream>

#include <vector>

using namespace std;

int main (){

    cout<<"This is a test code"<<endl;

    vector <int> v; // initializing new vector
    v.push_back(1); //adds element to vector
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back(); //removes last element

    cout<<"The size of vector v is: "<<v.size()<<endl; //gives the size of the element
    cout<<"The Capacity of vector v is: "<<v.capacity()<<endl; //gives the capacity of the vector

    cout<<"The vector v is: ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


    vector <int> a(5,3); // initializing new vector with SIZE 5 and all elements are 3

    cout<<"The vector a is: ";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;


    vector <int> b(a); // initializing new vector b which has copied everything of a
    cout<<"The vector b is: ";
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;
    
    b.clear(); // clears the whole vector but doesnt change the capacity
    cout<<"The size of vector b is: "<<b.size()<<endl;
    cout<<"The capacity of vector b is: "<<b.capacity()<<endl;

    return 0;
}