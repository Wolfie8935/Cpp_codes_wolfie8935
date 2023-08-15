#include <iostream>
using namespace std;

int main (){

    int n, num, temp, rev;
    cout<<"Enter total number of digits: ";
    cin>>n;
    cout<<"Enter the number: ";
    cin>>num;
    for (int i=0; i<n; i++){
        temp = num % 10;
        rev = (rev * 10) + temp;
        num /= 10;
    }
    cout<<"The reversed num is: "<<rev;

    return 0;
}