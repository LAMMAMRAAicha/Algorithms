# Selection Sort

**Selection Sort** is a comparison-based sorting algorithm. It operates **in-place**, meaning it doesn't require additional memory as it directly modifies the array being sorted. However, it is **unstable**, as it may change the relative order of equal elements.

## How it works:
1. The array is iterated through multiple times.
2. The smallest element in the unsorted portion is found.
3. It is swapped with the element corresponding to the current iteration.

## Complexity:
- **Time**: O(n²) in the best, worst, and average cases, meaning the same number of comparisons are required even if the array is already sorted.
- **Space**: O(1), since no additional memory is used.

## Key Characteristics:
- Few writes: n-1 swaps in the worst case.
- Suitable for learning purposes, but not optimal for large datasets.

## Use Cases:
- When the elements are expensive to move (e.g., large structures), although cycle sort might be a better option for this specific case.