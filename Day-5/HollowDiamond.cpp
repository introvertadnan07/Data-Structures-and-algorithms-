#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    // Upper part
    for(int i = 1; i <= n; i++) {
        // Spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Stars
        for(int j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1) {
                cout << "*";      // Border
            } else {
                cout << " ";      // Inside hollow space
            }
        }

        cout << endl;
    }

    // Lower part
    for(int i = n - 1; i >= 1; i--) {
        // Spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Stars
        for(int j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
