#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return i;   // found
        }
    }
    return -1;          // not found
}

int main() {
    int sz;
    cout << "Enter size of array: ";
    cin >> sz;

    int arr[100]; // simple fixed size 
    
    cout << "Enter " << sz << " elements: ";
    for (int i = 0; i < sz; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;

    int result = linearSearch(arr, sz, target);

    if (result == -1) {
        cout << "Target not found" << endl;
    } else {
        cout << "Target found at index: " << result << endl;
    }

    return 0;
}
