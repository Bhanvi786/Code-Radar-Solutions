#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], freq[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  
    }
    for(int i = 0; i < n; i++) {
        if(freq[i] == -1) {  
            int count = 1;   
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; 
                }
            }
            freq[i] = count; 
        }
    }

    int flag = 0, a;
    for(int i = 0; i < n; i++) {
        if(freq[i] > n / 2) { 
            a = arr[i];
            flag = 1;
            break;
        }
    }

    if(flag) {
        printf("%d\n", a);
    } else {
        printf("-1\n"); 
    }
    return 0;
}
