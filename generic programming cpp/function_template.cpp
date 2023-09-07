#include<iostream>
using namespace std;

template <class T> void show (T a, T b, T c){
    cout<<a<<b<<c;
}

int main (){
    show (6, 8, 3);
    return 0;
}