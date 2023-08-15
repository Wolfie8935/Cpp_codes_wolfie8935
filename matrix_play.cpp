#include <iostream>
using namespace std;

int main(){

    int n, m;
    cout<<"Enter the size of matrix row X column: ";
    cin>>n>>m;
    int mat[n][m];

    cout<<"The input matrix is: "<<endl;;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }

    cout<<"The matrix inputted is: "<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    // //move elements of top row
    // for (int j=0; j<m; j++){
    //     mat[n][j+1] = mat[n][j];
    // }

    // //move elements if last column
    // for (int i=n; i>0; i--){
    //     mat[i-1][m] = mat[i][m];
    // }

    // //move elements of last row
    // for(int j=m; j>0; j--){
    //     mat[n][j-1] = mat[n][j];
    // }

    // //move elements of first column
    // for (int i=0; i<n; i++){
    //     mat[i+1][m] = mat[i][m];
    // }

    // cout<<"The new matrix after rotation is:"<<endl;
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<m; j++){
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int transpose[n][m];    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            transpose[j][i] = mat[i][j];
        }
    }
    cout<<"The transpose of the matrix is:"<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    int row_switch[n][m];    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            row_switch[j][i] = mat[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            row_switch[i+1][j] = row_switch[i][j];
            if(i==n-1){
                row_switch[0][j] = row_switch[i][j];
            }
        } 
    }
    cout<<"After Switching rows: "<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<row_switch[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}