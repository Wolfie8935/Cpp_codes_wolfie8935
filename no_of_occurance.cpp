#include <iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter given array of numbers: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int count = 0;
    cout<<"Enter number to be found: ";
    cin>>m;
    for (int i=0; i<n; i++){
        if(arr[i]==m){
            count++;
        }
    }
    cout<<"No of occurance were: "<<count<<endl;

    return 0;
}