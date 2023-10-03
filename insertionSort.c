#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (j = 1; j < n; j++) {
        key = arr[j];
        i = j - 1;

        // key보다 큰 원소를 모두 오른쪽으로 이동
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printf("정렬된 배열: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
