#include <iostream>
#include <algorithm> // Required for std::max

using namespace std;

// Optimized using an initializer list (C++11 and later)
int max_of_four(int a, int b, int c, int d) {
    return max({a, b, c, d});
}

int main() {
    int a, b, c, d;
    // Faster I/O than cin for large datasets
    if (scanf("%d %d %d %d", &a, &b, &c, &d) == 4) {
        printf("%d\n", max_of_four(a, b, c, d));
    }
    return 0;
}
