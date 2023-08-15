#include <iostream>

using namespace std;

int main (){

    int a,b,n;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"1] Add\n2] Substract\n3]Multiply\n4]Divide\nEnter option: ";
    cin>>n;
    int result = 0;
    if(n==1){
        result = a+b;
    }
    else if(n==2){
        result = a-b;
    }
    else if(n==3){
        result = a*b;
    }
    else if(n==4){
        result = a/b;
    }
    else{
        cout<<"Wrong input";
    }

    cout<<result;

    return 0;
}