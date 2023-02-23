#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int odd_count = 0;
    int even_count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }
    cout << "Number of odd integers: " << odd_count << endl;
    cout << "Number of even integers: " << even_count << endl;
    return 0;
}

