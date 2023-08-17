#include <iostream>
using namespace std;

int main() {
    int num, temp;
    char arr[100]; 
    int i = 0;

    cout << "Enter a decimal number: ";
    cin >> num;

    while (num > 0) {
        temp = num % 16;
        if (temp <= 9) {
            arr[i] = temp + '0'; 
        } else {
            arr[i] = temp - 10 + 'A';
        }
        num = num / 16;
        i++;
    }

    cout << "The number in hexadecimal is: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j];
    }

    return 0;
}
