#include <stdio.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void bubble_sort(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

int main() {
  const int n = 9;
  int arr[n] = {9, -3, 5, 2, 6, 8, -6, 1, 3};
  for (int i = 0; i < 9; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  bubble_sort(arr, n);
  for (int i = 0; i < 9; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
