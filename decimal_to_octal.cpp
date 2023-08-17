#include <iostream>
using namespace std;

int main (){

    int num,arr[100];
    cout<<"Enter the decimal number: ";
    cin>>num;

    int i=0;
    while (num>0){
        arr[i] = num%8;
        num = num/8;
        i++;
    }

    cout<<"The number in octal is: ";
    for (int j=i-1; j>=0; j--){
        cout<<arr[j];
    }

    return 0;
}