<<<<<<< HEAD
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    if(n <= 1) {
        isPrime = false;
    } else {
        for(int i = 2; i <= n - 1; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime) {
        cout << "prime no\n";
    } else {
        cout << "non prime no\n";
    }

    return 0;
}
=======
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    if(n <= 1) {
        isPrime = false;
    } else {
        for(int i = 2; i <= n - 1; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime) {
        cout << "prime no\n";
    } else {
        cout << "non prime no\n";
    }

    return 0;
}
>>>>>>> 51a46bfce02fca5c52a263317bba987abd64b94f
