function insertion_sort(arr: number[]): void {
  for (let i = 0; i < arr.length; i++) {
    let j = i + 1;
    const key = arr[j];

    while (i > -1 && key > arr[j]) {
      arr[i] = arr[i + 1]
      i = i - 1
    }
    arr[i + 1] = key
  }
}

console.log(insertion_sort([5, 2, 4, 6, 1, 3]))
