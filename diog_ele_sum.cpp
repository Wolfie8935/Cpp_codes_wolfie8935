#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the num of row and column of matrix: ";
    cin>>n;
    int mat1[n][n], sum;
    cout<<"Enter matrix 1: "<<endl;
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>mat1[i][j];
        }
    }
    sum = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(i==j){
                sum += mat1[i][j];
            }
        }
    }
    cout<<"The sum of diognal elements are: "<<sum<<endl;

    return 0;
}