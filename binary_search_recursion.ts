function solve(arr: number[], low: number, high: number, needle: number): number {
  const mid = Math.floor((high + low) / 2)
  if (high <= low) {
    return -1
  }
  if (arr[mid] === needle) {
    return arr[mid]
  } else if (arr[mid] > needle) {
    return solve(arr, low, mid, needle)
  } else {
    return solve(arr, mid + 1, high, needle)
  }
}

function binary_search(arr: number[], needle: number) {
  return solve(arr, 0, arr.length, needle)
}

console.log(binary_search([1, 2, 3, 4, 5, 6], 2))
