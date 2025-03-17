#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], freq[n];

    // Initialize frequency array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Mark all elements as unprocessed
    }

    // Count frequency of each element
    for(int i = 0; i < n; i++) {
        if(freq[i] == -1) {  // Only process uncounted elements
            int count = 1;   // Reset count for new element
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark duplicate as processed
                }
            }
            freq[i] = count; // Store frequency of current element
        }
    }

    // Find majority element
    int flag = 0, a;
    for(int i = 0; i < n; i++) {
        if(freq[i] > n / 2) { // Check if it appears more than n/2 times
            a = arr[i];
            flag = 1;
            break;
        }
    }

    // Print result
    if(flag) {
        printf("%d\n", a);
    } else {
        printf("-1\n"); // No majority element
    }

    return 0;
}
