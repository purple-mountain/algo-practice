function insertion_sort(arr: number[]): number[] {
  for (let i = 0; i < arr.length - 1; i++) {
    let j = i + 1;
    const key = arr[j];

    while (i > -1 && arr[i] > key) {
      arr[i + 1] = arr[i]
      i--;
    }
    arr[i + 1] = key
  }
  return arr
}

console.log(insertion_sort([5, 2, 4, 6, 1, 3]))
