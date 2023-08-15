#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int mat1[3][3], mat2[3][3], mat4[3][3];

    

    cout << "Enter matrix 1: " << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin>>mat1[i][j];
        }
    }

    cout << "Enter matrix 2: " << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin>>mat2[i][j];
        }
    }

    int** mat3 = (int**)malloc(3 * sizeof(int*));
    for (int i=0; i<3; i++) {
        mat3[i] = (int*)calloc(3, sizeof(int));
    }

    cout << "\nMatrix multiplication is: " << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            // mat3[i][j] = 0;  
            for (int k=0; k<3; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];  
            }
        }
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<mat3[i][j]<< " ";
        }
        cout<<endl;
    }

    cout << "Matrix addition is: " << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            mat4[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<mat4[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0; i<3; i++) {
        free(mat3[i]);
    }
    free(mat3);

    return 0;
}
