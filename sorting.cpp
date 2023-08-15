#include <iostream>
using namespace std;

int main(){

    int arr[5] = {4,6,2,8,1};
    int temp[5], t = arr[0];
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            if (t > arr[j]){
                t = arr[j]
            }
        }        
    }

    cout<<"The sortd array is: "<<endl;
    for (int i=0; i<5; i++){
        cout<<temp[i]<<" ";
    }

    return 0;
}