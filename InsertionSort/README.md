# Insertion Sort

**Insertion sort** is a comparison-based sorting algorithm. It is often used for small data sizes or when the data is nearly sorted.

## Characteristics

- **Type of sort**: Comparison sort.
- **Structure**: Works with arrays and lists.
- **Stable**: Yes (does not change the order of equal elements).
- **In-place**: Yes (modifies the array directly without significant extra memory).

## How It Works

The algorithm iterates through each element of the array and inserts it into the correct position among the already sorted elements. Thus, at each iteration, one part of the array is sorted (the preceding elements) while the other is not sorted (the following elements).

### Steps:
1. The first element is considered sorted.
2. For each subsequent element:
   - Compare the element with the already sorted elements.
   - Shift larger elements to the right.
   - Insert the element in the correct position.

### Example:
If the array is nearly sorted, the algorithm will be very efficient. However, if the array is in reverse order, the algorithm will require more comparisons and shifts.

## Complexity

| Case         | Time Complexity | Space Complexity |
|--------------|------------------|-------------------|
| Best case    | O(n)             | O(1)              |
| Average case | O(n²)            | O(1)              |
| Worst case   | O(n²)            | O(1)              |

- **Best case**: If the array is already sorted, the algorithm makes about `n - 1` comparisons.
- **Worst case**: If the array is sorted in reverse, it requires approximately `n² / 2` comparisons.
- **Average case**: On average, about `n² / 4` comparisons.

## Advantages

- Efficient for small data sizes.
- Very fast on nearly sorted arrays (linear complexity in this case: O(n)).
- **Online algorithm**: Can receive elements one at a time and sort them incrementally.

## Disadvantages

- Inefficient for large unsorted arrays due to its quadratic complexity in the worst case.

## Use Cases

- Very effective for small data inputs.
- Particularly suitable for nearly sorted arrays, where the algorithm approaches O(n).
