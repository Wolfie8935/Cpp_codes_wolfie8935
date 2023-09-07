#include <iostream>

#include <set>  //only unique elements are stored 
                //once put you cannot modify 
                //eiter put the element or delete it from exsistance as you cannnot modify it 
                //returns in sorted order

using namespace std;

int main (){

    cout<<"This is a sample program"<<endl;

    set <int> s; //initialize

    s.insert(7); //inserting elements
    s.insert(7);
    s.insert(3);
    s.insert(9);
    s.insert(2);
    s.insert(2); //wont be counting duplicates
    s.insert(2);
    s.insert(0);

    cout<<"The set is: ";
    for (int i:s){
        cout<<i<<" ";
    }cout<<endl;

    s.erase(2); //erases the element given
    cout<<"The new set is: ";
    for (int i:s){
        cout<<i<<" ";
    }cout<<endl;

    set <int>::iterator itr = s.begin(); //initializing iterator to bei=gin so delete middle elements
    itr++;
    itr++;
    s.erase(itr); //diresct s.begin()+2 not allowed
    cout<<"The new new set is: ";
    for (int i:s){
        cout<<i<<" ";
    }cout<<endl;

    s.insert(2); 
    s.insert(3);

    set <int>::iterator itr2 = s.find(7); //finds where the hell 7 is
    cout<<"Finding 7 and give all the numbers from 7: ";
    for (auto it=itr2; it!=s.end(); it++){
        cout<<*it<<" "; //printing all elements after 7
    }cout<<endl;

    cout<<"The og set is: ";
    for (int i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Is 3 present or not: "<<s.count(3)<<endl; //checks weather the given number is present or not {0,1}


    return 0;
}