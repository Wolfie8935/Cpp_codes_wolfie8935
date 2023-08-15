#include <iostream>
using namespace std;

int main(){

    int n,big,low;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    big = arr[0];
    low = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>=big){
            big = arr[i];
        }
    }
    for (int i=0; i<n; i++){
        if(arr[i] <= low){
            low = arr[i];
        }
    }
    cout<<"The biggest number is: "<<big<<endl<<"The smallest number is: "<<low<<endl;

    return 0;
}