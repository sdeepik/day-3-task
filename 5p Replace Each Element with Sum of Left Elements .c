#include <stdio.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        int temp = arr[i];
        arr[i] = sum;
        sum += temp;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
