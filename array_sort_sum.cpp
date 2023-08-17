#include <iostream>
using namespace std;

int main (){

    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int num, sum=0, counter = 0, flag = 0;
    cout<<"Enter number: ";
    cin>>num;

    cout<<"From intex to intex will give: ";
    for (int i=0; i<n; i++){
        flag = i;
        for (int j=flag;j<n; j++){
            sum +=arr[j];
            counter++;
            if(sum==num){
                cout<<i<<" "<<counter-1<<endl;
            }
            else if(sum>num){
                break;
            }
            else if(sum!=num && flag==n-1){
                cout<<"-1";
            }
        }
        counter = 0;
        sum=0;
    }

    return 0;
}