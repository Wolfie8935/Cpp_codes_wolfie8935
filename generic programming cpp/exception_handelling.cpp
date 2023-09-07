#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a>> b;
    try
    {
    if (b!=0)
        {
            cout<<a/b;
        }
    else
        {
            throw(b);
        }
    }
    catch(int i)
        {
        cout << "Exception caught";
        }
    
    cout<< "division";
    
    return 0;
}