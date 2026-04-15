#include <cstdio>
#include <cstdlib> // For abs()

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = std::abs(*a - *b);
    
    // Assign calculated values back to the memory addresses
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    
    // Read input directly into the variables
    if (scanf("%d %d", &a, &b) == 2) {
        // Pass the addresses of a and b to the update function
        update(&a, &b);
        printf("%d\n%d\n", a, b);
    }
    
    return 0;
}

