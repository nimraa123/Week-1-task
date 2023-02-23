#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 1, 7, 3, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_diff = arr[1] - arr[0];
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] - arr[i] > max_diff) {
                max_diff = arr[j] - arr[i];
            }
        }
    }
    cout << "The maximum difference in the array is " << max_diff << endl;
    return 0;
}

