function insertion_sort(arr) {
    for (var i = 0; i < arr.length - 1; i++) {
        var j = i + 1;
        var key = arr[j];
        while (i > -1 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
    return arr;
}
console.log(insertion_sort([5, 2, 4, 6, 1, 3]));
