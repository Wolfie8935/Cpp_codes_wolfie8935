#include <iostream>
using namespace std;

int main(){

    int mat[3][3], large, small;
    cout<<"Enter a matrix: "<<endl;;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin>>mat[i][j];
        }
    }
    large = mat[0][0];
    small = mat[0][0];
    
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if(mat[i][j] >= large){
                large = mat[i][j];
            }
        }
    }
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if(mat[i][j] <= small){
                small = mat[i][j];
            }
        }
    }

    cout<<"The largest number is: "<<large<<endl<<"The smallest number is: "<<small<<endl;

    return 0;
}