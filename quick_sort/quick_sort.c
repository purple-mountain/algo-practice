#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high - 1];
  int idx = low - 1;

  for (int i = low; i < high - 1; i++) {
    if (pivot >= arr[i]) {
      idx++;
      swap(&arr[i], &arr[idx]);
    }
  }

  idx++;
  swap(&arr[idx], &arr[high - 1]);

  return idx;
}

void qs(int arr[], int low, int high) {
  if (high <= low || low < 0) {
    return;
  }

  int p = partition(arr, low, high);
  qs(arr, p + 1, high);
  qs(arr, low, p);
}

int main() {
  int arr[9] = {9, -3, 5, 2, 6, 8, -6, 1, 3};
  for (int i = 0; i < 9; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  qs(arr, 0, 9);
  for (int i = 0; i < 9; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
