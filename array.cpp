#include <iostream>
using namespace std;

int main() {
    int n;
    // 1. Read the number of integers
    cin >> n;

    // 2. Declare an array of size n and read the integers
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 3. Print the array in reverse order
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << (i == 0 ? "" : " ");
    }
    
    cout << endl;
    return 0;
}
