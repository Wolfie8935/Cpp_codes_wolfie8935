#include <iostream>
using namespace std;

int main (){

    cout<<"Enter any number: ";
    int num, k, arr[5], add = 0, multi = 1;
    cin>>num;

    cout<<"The digis are: ";

    if (num<=99999 && num>=10000){
        for (int i=0; i<5; i++){
            k = num % 10;
            arr[i] = k;
            num /= 10;
            cout << arr[i] << " ";
            add += k;
            multi *= k;
        }
    }
    else if(num<=9999 && num>=1000){
        for (int i=0; i<4; i++){
            k = num % 10;
            arr[i] = k;
            num /= 10;
            cout << arr[i] << " ";
            add += k;
            multi *= k;
        }
    }
    else if(num<=999 && num>=100){
        for (int i=0; i<3; i++){
            k = num % 10;
            arr[i] = k;
            num /= 10;
            cout << arr[i] << " ";
            add += k;
            multi *= k;
        }
    }
    else if(num<=99 && num>=10){
        for (int i=0; i<2; i++){
            k = num % 10;
            arr[i] = k;
            num /= 10;
            cout << arr[i] << " ";
            add += k;
            multi *= k;
        }
    }
    else if(num<=9 && num>=0){
        cout<<"The number is: "<<num<<endl;
        cout<<"Add = Multiply = "<<num<<endl;
        exit(0);
    }
    else{
        cout<<"Enter a number within the range from 0 to 1 lakh"<<endl;
        exit(0);
    }

    cout<<endl;

    cout<<"The Addition is: "<<add<<endl;
    cout<<"The Multiplication is: "<<multi<<endl;


    return 0;
}