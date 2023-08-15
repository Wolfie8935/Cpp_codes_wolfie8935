#include <iostream>
using namespace std;

int main(){

    char a[10][10]={" one "," two "," three "," four "," five "," six "," seven "," eight "," nine "," ten "};
    char b[10][13]={" eleven "," twelve "," thirteen "," fourteen "," fifteen "," sixteen "," seventeen "," eighteen "," nineteen "};
    char c[10][10]={" ten "," twenty "," thirty "," forty "," fifty "," sixty "," seventy "," eighty "," ninety "," hundred "};
    int x,y,z;
    long n;
    cin>>n;
    if (n>9999){
        x = x/1000;
        if(x>10 && x<20){
            x = x % 10;
            cout<<b[x-1]<<" thousands ";
        }
        else{
            y = x/10;
            z = x%10;
            cout << c[y-1];
            cout<< a[z-1]<<" thousand ";
        }
        n = n % 1000;
    }
    if(n%1000){
        x = n/1000;
        cout<<a[x-1]<<" thousand ";
    }
    if(n>100){
        x = n/100;
        cout<< a[x-1]<<" hundred ";
    }
    if(n>10 && n<20){
        x=n%10;
        cout<< b[x-1];
    }
    if(n>19 && n<=100){
        x = n/10;
        cout<< c[x-1];
        n = n%10;
    }
    if(n>0 && n<10){
        cout<<a[n-1];
    }

    return 0;
}