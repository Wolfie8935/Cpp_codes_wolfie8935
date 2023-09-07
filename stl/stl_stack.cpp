#include <iostream>

#include <stack> // one on top of another //LAST IN FIRST OUT 

using namespace std;

int main (){

    cout<<"This is a test program"<<endl;

    stack <string> s; //initialize with strings
    s.push("Jayanth"); //goes to the bottom just s we are stacking boxes on top of each another
    s.push("Rishaan");
    s.push("Dhruv");
    s.push("Aman");
    s.push("Ayushi"); //at the top

    cout<<"The top name is: "<<s.top()<<endl; //last in first out so the top name
    s.pop();
    cout<<"Now the top name is: "<<s.top()<<endl; //2nd top
    
    cout<<"The size of s string is: "<<s.size()<<endl; // gives the size of it
    cout<<"Is the string empty: "<<s.empty()<<endl; //is the string empty or not {0,1}

    

    return 0;
}