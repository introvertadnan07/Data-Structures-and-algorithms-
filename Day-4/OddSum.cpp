<<<<<<< HEAD
#include<iostream>
using namespace std;

int main() {
    int n = 50;
    int oddSum = 0;

    for(int i=1; i<=n; i++) {
        if(i%2 !=0){
            oddSum += i;
        }
    }

    cout << "oddSum = " << oddSum << endl;
    return 0;
=======
#include<iostream>
using namespace std;

int main() {
    int n = 50;
    int oddSum = 0;

    for(int i=1; i<=n; i++) {
        if(i%2 !=0){
            oddSum += i;
        }
    }

    cout << "oddSum = " << oddSum << endl;
    return 0;
>>>>>>> 51a46bfce02fca5c52a263317bba987abd64b94f
}