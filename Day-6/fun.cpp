#include<iostream>
using namespace std;

void channgeX(int x) {
    x = 2*x;
    cout << "x = " << x << endl;
}

int main() {
    int x = 5;
    channgeX(x);

    cout << "x = " << x << endl;
    return 0;
}