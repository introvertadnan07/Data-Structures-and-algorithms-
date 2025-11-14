#include<iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter the number : ";

    cin >> n;

    if(n%2 == 0) {
        cout << "Even\n";
        cout << "bye\n";
    }
    else {
        cout << "Odd\n";
    }
    return 0;

}