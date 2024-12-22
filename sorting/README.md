# Sorting

Sorting is the process of arranging elements in a specific order. The most common orders are numerical order and lexicographical order. Sorting is used in a variety of applications, such as searching, data compression, and data analysis.

There are many different sorting algorithms, each with its own advantages and disadvantages. Some of the most common sorting algorithms include bubble sort, selection sort, insertion sort, merge sort and quick sort.

## Bubble Sort

Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.

### Pseudocode

```plaintext
procedure bubbleSort(A : list of sortable items)
    n = length(A)
    repeat
        swapped = false
        for i = 1 to n-1 inclusive do
            if A[i-1] > A[i] then
                swap(A[i-1], A[i])
                swapped = true
            end if
        end for
        n = n - 1
    until not swapped
end procedure
```

### Complexity

- Time complexity: O(n^2)
- Space complexity: O(1)

## Selection Sort

Selection sort is a simple sorting algorithm that repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first unsorted element. The process is repeated until the entire list is sorted.

### Pseudocode

```plaintext
procedure selectionSort(A : list of sortable items)
    n = length(A)
    for i = 0 to n-1 inclusive do
        minIndex = i
        for j = i+1 to n-1 inclusive do
            if A[j] < A[minIndex] then
                minIndex = j
            end if
        end for
        swap(A[i], A[minIndex])
    end for
end procedure
```

### Complexity

- Time complexity: O(n^2)
- Space complexity: O(1)

## Insertion Sort

Insertion sort is a simple sorting algorithm that builds the final sorted list one element at a time. It takes each element from the unsorted portion of the list and inserts it into its correct position in the sorted portion of the list.

### Pseudocode

```plaintext
procedure insertionSort(A : list of sortable items)
    n = length(A)
    for i = 1 to n-1 inclusive do
        key = A[i]
        j = i - 1
        while j >= 0 and A[j] > key do
            A[j+1] = A[j]
            j = j - 1
        end while
        A[j+1] = key
    end for
end procedure
```

### Complexity

- Time complexity: O(n^2)
- Space complexity: O(1)

## Merge Sort

Merge sort is a divide-and-conquer sorting algorithm that recursively divides the list into two halves, sorts each half, and then merges the sorted halves back together. It is a stable sorting algorithm and has a time complexity of O(n log n).

### Pseudocode

```plaintext
procedure mergeSort(A : list of sortable items)
    n = length(A)
    if n <= 1 then
        return A
    end if
    mid = n / 2
    left = mergeSort(A[0..mid-1])
    right = mergeSort(A[mid..n-1])
    return merge(left, right)
end procedure

procedure merge(left : list of sortable items, right : list of sortable items)
    result = []
    while left is not empty and right is not empty do
        if first(left) <= first(right) then
            append first(left) to result
            remove first(left)
        else
            append first(right) to result
            remove first(right)
        end if
    end while
    append remaining elements of left to result
    append remaining elements of right to result
    return result
end procedure
```

### Complexity

- Time complexity: O(n log n)
- Space complexity: O(n)

## Quick Sort

Quick sort is a divide-and-conquer sorting algorithm that recursively divides the list into two sublists, one with elements less than a pivot and one with elements greater than the pivot. It then sorts the sublists and combines them to produce the final sorted list.

### Pseudocode

```plaintext
procedure quickSort(A : list of sortable items)
    if length(A) <= 1 then
        return A
    end if
    pivot = selectPivot(A)
    less = []
    equal = []
    greater = []
    for x in A do
        if x < pivot then
            append x to less
        else if x = pivot then
            append x to equal
        else
            append x to greater
        end if
    end for
    return concatenate(quickSort(less), equal, quickSort(greater))
end procedure

procedure selectPivot(A : list of sortable items)
    return A[0]
end procedure
```

### Complexity

- Time complexity: O(n log n) on average, O(n^2) in the worst case
- Space complexity: O(log n)

## Comparison

| Algorithm     | Best-case time complexity | Average-case time complexity | Worst-case time complexity | Space complexity | Stable |
|---------------|----------------------------|------------------------------|----------------------------|------------------|--------|
| Bubble Sort   | O(n)                       | O(n^2)                       | O(n^2)                     | O(1)             | Yes    |
| Selection Sort| O(n^2)                     | O(n^2)                       | O(n^2)                     | O(1)             | No     |
| Insertion Sort| O(n)                       | O(n^2)                       | O(n^2)                     | O(1)             | Yes    |
| Merge Sort    | O(n log n)                 | O(n log n)                   | O(n log n)                 | O(n)             | Yes    |
| Quick Sort    | O(n log n)                 | O(n log n)                   | O(n^2)                     | O(log n)         | No     |

## Sample Problems

- [LeetCode - Sort Colors](https://leetcode.com/problems/sort-colors/)
- [LeetCode - Merge Intervals](https://leetcode.com/problems/merge-intervals/)
- [LeetCode - Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)
- [LeetCode - Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)
- [LeetCode - Sort List](https://leetcode.com/problems/sort-list/)
- [LeetCode - Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/)
- [LeetCode - Largest Number](https://leetcode.com/problems/largest-number/)
- [LeetCode - Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/)
- [LeetCode - K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/)
- [LeetCode - Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/)
- [LeetCode - Sort Array By Parity II](https://leetcode.com/problems/sort-array-by-parity-ii/)
- [LeetCode - Sort the Matrix Diagonally](https://leetcode.com/problems/sort-the-matrix-diagonally/)
- [LeetCode - Sort Integers by The Number of 1 Bits](https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/)
- [LeetCode - Sort the Matrix Diagonally II](https://leetcode.com/problems/sort-the-matrix-diagonally-ii/)

