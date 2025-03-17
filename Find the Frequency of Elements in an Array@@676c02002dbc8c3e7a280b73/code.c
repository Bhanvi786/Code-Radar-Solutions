#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    int arr[n], freq[n];

    // Read array elements and initialize frequency array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Mark as unprocessed
    }

    // Count frequency of each element
    for (i = 0; i < n; i++) {
        if (freq[i] == -1) { // Only process uncounted elements
            int count = 1; // Initialize count

            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark duplicates as processed
                }
            }

            freq[i] = count; // Store count for this unique element
        }
    }

    // Print unique elements and their frequencies
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) { // Print only counted elements
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
