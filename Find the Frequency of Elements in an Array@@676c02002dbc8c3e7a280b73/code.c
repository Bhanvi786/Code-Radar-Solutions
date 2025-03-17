#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int arr[n], freq[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; 
    }
    for (i = 0; i < n; i++) {
        if (freq[i] == -1) { 
            int count = 1;

            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; 
                }
            }

            freq[i] = count; 
        }
    }
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) { 
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
