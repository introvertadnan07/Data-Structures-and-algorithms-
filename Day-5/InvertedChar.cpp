#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        // Spaces
        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        // Characters
        char ch = 'A' + i;   // Row 0 = A, Row 1 = B, Row 2 = C...

        for(int j = 0; j < n - i; j++) {
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}
