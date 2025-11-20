#include<iostream>
using namespace std;

// sum of 2 number 
double sum(double a, double b) {
    double s = a + b;
    return s;

}

// min of 2 nums

int minOfTwo(int a, int b) { // parameters
    if(a < b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    cout << "min = " << minOfTwo(6, 4) << endl; // arguments

    // cout << sum(31.23 , 36.9) << endl;

    return 0;


}