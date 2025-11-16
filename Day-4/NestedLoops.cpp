#include<iostream>
using namespace std;

int main () {
    // for(int i=1; i<=5; i++) {
    //     cout << "****" << endl;
    // }

    // int x = 10;
    // for(int i=1; i<=x; i++) {
    //     cout << " * ";
    // }

    int n = 5;
    for(int i=1; i<=n; i++) {
        int m = 5;
        for(int i=1; i<=m; i++) {
            cout << " * ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}