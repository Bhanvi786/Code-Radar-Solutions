#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFromRight = arr[n - 1]; // Rightmost element is always a leader
    printf("%d ", maxFromRight);  // Print it directly

    // Traverse from second-last to first element
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            printf("%d ", maxFromRight); // Directly print leader
        }
    }

    return 0;
}
