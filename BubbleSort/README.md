# Bubble Sort

**Bubble Sort** is a comparison-based sorting algorithm. It is named after the way larger elements "bubble" to the top (end of the array), similar to how larger bubbles rise to the surface faster.

This algorithm is **in-place**, meaning it modifies the array directly and does not require additional memory. It is also **stable**, meaning it preserves the relative order of equal elements.

## How it works:
1. The array is iterated over, and consecutive elements are compared.
2. If two consecutive elements are out of order, they are swapped.
3. This process is repeated until the array is fully sorted.

## Complexity:
- **Time**:
  - Best case: O(n) (when the array is already sorted).
  - Average and worst case: O(n²).
- **Space**: O(1) as it operates in-place.

## Key Characteristics:
- Considered one of the least efficient sorting algorithms with poor real-world performance.
- Best suited for educational purposes or arrays that are nearly sorted.

## Use Cases:
- Used in teaching to demonstrate basic sorting concepts.
- Effective for correcting nearly sorted arrays with a time complexity of O(2n).

