#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <map>
#include <set>


using namespace std;

int main (){

    cout<<"\nARRAY\n"<<endl;
    cout<<"This is a test program"<<endl;

    array <int,7> a={4,5,6,7,8,9,10};
    int size = a.size();

    cout<<"The array is: ";
    for (int i=0; i<size; i++){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"The number at 2nd index is: "<<a.at(2)<<endl;
    cout<<"The front element is: "<<a.front()<<endl;
    cout<<"The back element is: "<<a.back()<<endl;






    cout<<"\nVECTOR\n"<<endl;

    vector <int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);

    cout<<"The size of the vector v is: "<<v.size()<<endl;
    cout<<"The capacity of the vector should be 8: "<<v.capacity()<<endl;

    cout<<"The Vector v is: ";
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"The Vector v after pop is: ";
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.clear();

    cout<<"The Vector v finally is: ";
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Is the v vector empty now: "<<v.empty()<<endl;
    cout<<"The size of the vector v after clear is (0): "<<v.size()<<endl;
    cout<<"The capacity of the vector should be 8: "<<v.capacity()<<endl;

    vector <int> v1(5,6);
    vector <int> v2(7,1);
    vector <int> v3(v2);

    cout<<"The Vector v1 is: ";
    for (int i:v1){
        cout<<i<<" ";
    }cout<<endl;    

    cout<<"The Vector v2 is: ";
    for (int i:v2){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"The Vector v3 is: ";
    for (int i:v3){
        cout<<i<<" ";
    }cout<<endl;





    cout<<"\nDeque\n"<<endl;

    deque <int> d;
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_front(1);
    d.push_front(0);

    cout<<"The deque d is(0,1,2,3,4,5): ";
    for (int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    d.pop_front();

    cout<<"The deque d after popping is(1,2,3,4): ";
    for (int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"The 2nd index is: "<<d.at(2);

    d.erase(d.begin(), d.begin()+2);
    
    cout<<"The deque d after erasing is(3,4): ";
    for (int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"The size of the deque is(2): "<<d.size()<<endl;

    d.clear();
    cout<<"The size of the deque d is(0): "<<d.size()<<endl;
    cout<<"Is the deque empty (1): "<<d.empty()<<endl;






    cout<<"\nLIST\n"<<endl;
    list <int> l;
    l.push_back(9);
    l.push_back(8);
    l.push_back(7);
    l.push_back(6);
    l.push_front(5);
    l.push_front(4);
    l.push_front(3);

    cout<<"The list l is(3,4,5,9,8,7,6): ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"The list l is(4,5,9,8,7,6): ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.pop_back();
    l.pop_front();
    cout<<"The list l is(4,5,9,8,7): ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"The size of list l is (5): "<<l.size()<<endl;

    list <float> l1(6,3.14);
    list <float> l2(5,6.67);
    list <float> l3(l2);

    cout<<"The list l1 is(3.14*6): ";
    for(float i:l1){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"The list l2 is(6.67*5): ";
    for(float i:l2){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"The list l3 is(6.67*5): ";
    for(float i:l3){
        cout<<i<<" ";
    }cout<<endl;





    cout<<"\nSTACK\n"<<endl;

    stack <int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);

    cout<<"The topmost element is(2): "<<s.top()<<endl;

    s.pop();
    cout<<"The topmost element is(3): "<<s.top()<<endl;

    cout<<"The size of the stack s is(3): "<<s.size()<<endl;
    cout<<"Is the stack empty(0): "<<s.empty()<<endl;






    cout<<"\nMAP\n"<<endl;
    map <int,string> m;
    m[1]="one";
    m[2]="two";
    m[3]="three";
    m[4]="four";
    m[5]="five";
    m.insert({6,"six"});
    m.insert({7,"seven"});
    m.insert({8,"eight"});
    m.insert({9,"nine"});

    cout<<"The dictionary made is: ";
    for (auto i:m){
        cout<<i.first<<"-->"<<i.second<<endl;
    }cout<<endl;

    cout<<"Is the index 6 available in dictionary: "<<m.count(6)<<endl;

    cout<<"All the dictionary elements after 7 are: "<<endl;
    auto itr= m.find(7);
    for (auto i=itr; i!=m.end(); i++){
        cout<<(*i).first<<"-->"<<(*i).second<<endl;
    }cout<<endl;





    cout<<"\nSETS\n"<<endl;
    set <int> sets;

    sets.insert(2);
    sets.insert(2);
    sets.insert(3);
    sets.insert(7);
    sets.insert(4);
    sets.insert(1);

    cout<<"The given set is(1,2,3,4,7): ";
    for (int i:sets){
        cout<<i<<" ";
    }cout<<endl;

    sets.erase(2);
    cout<<"The given set is(1,3,4,7): ";
    for (int i:sets){
        cout<<i<<" ";
    }cout<<endl;

    set <int>::iterator itr2 = sets.begin();
    itr2++;

    cout<<"All the elemts after itr++ will be (3,4,7): ";
    for (auto i=itr2; i!=sets.end(); i++){
        cout<<*i<<" ";
    }cout<<endl;





    return 0;
}