// Your code here...
int findUnsortedSubarray(int arr[], int n) {
    int left = -1, right = -1;

    // Find the left boundary
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            left = i;
            break;
        }
    }

    // Find the right boundary
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            right = i;
            break;
        }
    }

    // Check if the array is already sorted
    if (left == -1 || right == -1) {
        printf("0\n");
        return 0; // Prevents further calculations
    }

    // Calculate the length of the subarray
    int a = (right - left) + 1;
    printf("%d\n", a);
    return a;
}
