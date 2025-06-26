#include <stdio.h>
#include <stdlib.h>

int max(int arr[], int n) {
      int max = arr[0];
      for (int i = 1; i < n; i++) {
          if (max < arr[i]) max = arr[i];
    }
      return max;
}

// Function to remove duplicates using frequency counting
int removeDupUsingFreq(int arr[], int n) {
    if (n == 0) return 0;

      // Creating frequency array
      int m = max(arr,n) + 1;
    int* f = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++) {
        f[i] = 0;
    }
  
    int j = 0;
    for (int i = 0; i < n; i++) {
      
        // If element is encountered for the first time
          // place it at arr[j] and mark element as seen
        if (f[arr[i]] == 0) {
            arr[j++] = arr[i];
            f[arr[i]] = 1;
        }
    }

    // Return the new size of the array
    return j;
}

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Remove duplicates
    n = removeDupUsingFreq(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}