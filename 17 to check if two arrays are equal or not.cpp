#include <iostream>
using namespace std;

bool are_arrays_equal(int arr1[], int arr2[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    if(are_arrays_equal(arr1, arr2, n)) {
        cout << "The arrays are equal." << endl;
    }
    else {
        cout << "The arrays are not equal." << endl;
    }
    return 0;
}

