#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    auto itr = lower_bound(a,a+n,3)-a;
    cout<<itr;

    return 0;
}