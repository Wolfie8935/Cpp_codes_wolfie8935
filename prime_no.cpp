#include <iostream>
using namespace std;

int main(){

    int n,k;
    cin>>n;
    k=0;
    for(int i=1; i<=n; i++){
        if (n%i==0){
            k++;
        }
    }
    if(k==2){
        cout<<"PRIME";
    }
    else{
        cout<<"NOT PRIME";
    }

    return 0;
}