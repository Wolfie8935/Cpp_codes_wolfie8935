#include <iostream>
using namespace std;

int main() {
    int num, arr[100];
    cout << "Enter any number: ";
    cin >> num;

    int i = 0; 

    while (num > 0) {
        arr[i] = num % 2;
        num = num / 2;
        i++;

        if (num == 1) {
            arr[i] = 1;
            break;
        }
    }

    cout << "The binary equivalent of the number is: ";
    for (int j = i; j >= 0; j--) {
        cout << arr[j] << " ";
    }

    return 0;
}
