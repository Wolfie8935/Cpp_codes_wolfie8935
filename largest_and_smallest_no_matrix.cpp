#include <bits/stdc++.h>
using namespace std;

int main (){

    int mat1[3][3];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            cin >> mat1[i][j];
        }
    }
    int largest = mat1[0][0], smallest = mat1[0][0];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            if (mat1[i][j] > largest) {
                largest = mat1[i][j];
            }
            if (mat1[i][j] < smallest) {
                smallest = mat1[i][j];
            }
        }
    }

    cout << "The largest element is: " << largest << endl;
    cout << "The smallest element is: " << smallest << endl;


    return 0;
}