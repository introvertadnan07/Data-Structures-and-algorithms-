#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    char smalla = 'a';

    int value = grade;
    int svalue = smalla;

    double price = 100.99;
    int newPrice = (int)price;

    cout << value << endl;
    cout<< svalue <<endl;

    cout<< newPrice <<endl;
    return 0;
}

// Conversion is implicit 
// casting is Explict