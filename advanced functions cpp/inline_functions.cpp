#include <iostream>
using namespace std;

inline int greaterer(int a, int b){
    return (a>b)?a:b;
}

int main (){
    int a,b;
    cin>>a>>b;
    cout<<greaterer(a,b);

    return 0;
}