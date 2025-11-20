#include<iostream>
using namespace std;

//function define
int printHello() {
    cout << "Hello\n";
    return 3;

}

int main() {
   // function call / invoke
   int val = printHello();
   // cout << printHello() << endl;
   cout << "Val = " << val << endl;


    return 0;
}