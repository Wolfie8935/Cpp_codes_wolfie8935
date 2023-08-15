#include <iostream>
using namespace std;

int main (){

    int arr1[5],arr2[5];
    cout<<"Enter array 1: ";
    for (int i=0; i<5; i++){
        cin>>arr1[i];
    }

    cout<<"Enter array 2: ";
    for (int i=0; i<5; i++){
        cin>>arr2[i];
    }

    for (int i=0; i<5; i++){
        arr1[i] = arr1[i] + arr2[i];
        arr2[i] = arr1[i] - arr2[i];
        arr1[i] = arr1[i] - arr2[i];
    }

    cout<<"The reversed arrays are: ";
    cout<<endl;
    for (int i=0; i<5; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<5; i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}