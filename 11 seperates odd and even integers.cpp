#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> even, odd;  
    int n;  
    cout << "Enter the number of integers: ";
    cin >> n;
    int num;
    for (int i = 0; i < n; i++) {
        cout << "Enter integer #" << i + 1 << ": ";
        cin >> num;
        if (num % 2 == 0) {
            even.push_back(num);  /
        } else {
            odd.push_back(num);  
        }
    }
    cout << "Even integers: ";
    for (int i = 0; i < even.size(); i++) {
        cout << even[i] << " ";
    }
    cout << endl;
    cout << "Odd integers: ";
    for (int i = 0; i < odd.size(); i++) {
        cout << odd[i] << " ";
    }
    cout << endl;
    return 0;
}

