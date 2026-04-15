#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    // 1. Read number of arrays (n) and number of queries (q)
    if (!(cin >> n >> q)) return 0;

    // 2. Create a vector of vectors to store the variable-length arrays
    vector<vector<int>> a(n);

    for (int i = 0; i < n; i++) {
        int k;
        // Read the size of the current inner array
        cin >> k;
        a[i].resize(k); // Resize the inner vector to hold k elements
        for (int j = 0; j < k; j++) {
            // Populate the inner vector with k integers
            cin >> a[i][j];
        }
    }

    // 3. Process each query
    for (int k = 0; k < q; k++) {
        int i, j;
        cin >> i >> j;
        // Access and print the element at index j of array a[i]
        cout << a[i][j] << endl;
    }

    return 0;
}
