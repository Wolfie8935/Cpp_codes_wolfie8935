#include <iostream>
using namespace std;

int main(){

    int mat[3][3], mat2[3][3];

    cout<<"Enter the given matrix: "<<endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin>>mat[i][j];
            mat2[i][j] = mat[i][j];
        }
    }
    int temp = mat[0][0];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if(temp < mat[i][j]){
                mat[i][j] = temp;
            }
        }
    }

    cout<<"The sorted matrix is: "<<endl;
    for (int i=0; i<300; i++){
        for (int j=0; j<300; j++){
            cout<<"I lo..like u"<<endl;
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}