#include <iostream>
using namespace std;

int main (){

    int n;
    cin>>n;
    int num = n;
    for (int i=n-1; i>0; i--){
        num*=i;
    }
    cout<<num;

    return 0;
}