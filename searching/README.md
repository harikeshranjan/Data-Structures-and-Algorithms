# Searching

Searching is the process of finding a particular element in the given list of elements. It is the most common operation performed on the data structure. Searching is performed on the data structure to find a particular element in the list of elements.

## Types of Searching

1. Linear Search
2. Binary Search
3. Binary Search (Recursive)
4. Jump Search
5. Interpolation Search

## Linear Search

Linear search is a simple search algorithm that searches for a particular element in the list of elements. It compares each element of the list with the search element until a match is found.

### Algorithm

1. Start from the first element of the list.
2. Compare the search element with the current element of the list.
3. If the search element is found, return the index of the element.
4. If the search element is not found, move to the next element of the list.

### Complexity

- Time complexity: O(n)
- Space complexity: O(1)

## Binary Search

Binary search is a search algorithm that searches for a particular element in the list of elements. It compares the search element with the middle element of the list. If the search element is greater than the middle element, then the search element is searched in the right half of the list. If the search element is less than the middle element, then the search element is searched in the left half of the list.

### Algorithm

1. Sort the list of elements.
2. Initialize the start index as 0 and the end index as the length of the list - 1.
3. Repeat the following steps until the start index is less than or equal to the end index:
    1. Calculate the middle index as the sum of the start index and the end index divided by 2.
    2. If the search element is equal to the middle element of the list, return the index of the middle element.
    3. If the search element is greater than the middle element of the list, update the start index as the middle index + 1.
    4. If the search element is less than the middle element of the list, update the end index as the middle index - 1.

### Complexity

- Time complexity: O(log n)
- Space complexity: O(1)

## Binary Search (Recursive)

Binary search (recursive) is a search algorithm that searches for a particular element in the list of elements. It compares the search element with the middle element of the list. If the search element is greater than the middle element, then the search element is searched in the right half of the list. If the search element is less than the middle element, then the search element is searched in the left half of the list.

### Algorithm

1. Sort the list of elements.
2. Initialize the start index as 0 and the end index as the length of the list - 1.
3. If the start index is less than or equal to the end index:
    1. Calculate the middle index as the sum of the start index and the end index divided by 2.
    2. If the search element is equal to the middle element of the list, return the index of the middle element.
    3. If the search element is greater than the middle element of the list, search the search element in the right half of the list.
    4. If the search element is less than the middle element of the list, search the search element in the left half of the list.

### Complexity

- Time complexity: O(log n)
- Space complexity: O(log n)

## Jump Search

Jump search is a search algorithm that searches for a particular element in the list of elements. It divides the list of elements into blocks of size `m` and performs a linear search on each block to find the search element.

### Algorithm

1. Sort the list of elements.
2. Initialize the block size `m` as the square root of the length of the list.
3. Initialize the start index as 0 and the end index as the block size.
4. Repeat the following steps until the end index is less than the length of the list:
    1. If the search element is less than the end element of the list, perform a linear search on the block.
    2. If the search element is found, return the index of the element.
    3. If the search element is not found, update the start index as the end index and the end index as the sum of the end index and the block size.
5. If the search element is not found, return -1.

### Complexity

- Time complexity: O(sqrt(n))
- Space complexity: O(1)

## Interpolation Search

Interpolation search is a search algorithm that searches for a particular element in the list of elements. It uses the formula `(low + (high - low) * (x - arr[low]) / (arr[high] - arr[low]))` to calculate the position of the search element in the list.

### Algorithm

1. Sort the list of elements.
2. Initialize the start index as 0 and the end index as the length of the list - 1.
3. Repeat the following steps until the start index is less than or equal to the end index:
    1. Calculate the position of the search element using the formula `(low + (high - low) * (x - arr[low]) / (arr[high] - arr[low]))`.
    2. If the search element is equal to the position element of the list, return the index of the position element.
    3. If the search element is greater than the position element of the list, update the start index as the position index + 1.
    4. If the search element is less than the position element of the list, update the end index as the position index - 1.

### Complexity

- Time complexity: O(log log n) on average
- Space complexity: O(1)

## Comparison

| Algorithm              | Time Complexity | Space Complexity |
|------------------------|-----------------|------------------|
| Linear Search          | O(n)            | O(1)             |
| Binary Search          | O(log n)        | O(1)             |
| Binary Search (Recursive) | O(log n)     | O(log n)          |
| Jump Search            | O(sqrt(n))      | O(1)             |
| Interpolation Search   | O(log log n)    | O(1)             |

## Applications

- Searching algorithms are used in various applications such as search engines, databases, and social media platforms.
- Searching algorithms are used to find a particular element in the list of elements.

## Problems

- [Leetcode - Two Sum](https://leetcode.com/problems/two-sum/)
- [Leetcode - Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)
- [Leetcode - Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)
- [Leetcode - Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)
- [Leetcode - Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)
- [Leetcode - Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)
- [Leetcode - Find Peak Element](https://leetcode.com/problems/find-peak-element/)
- [Leetcode - Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)
- [Leetcode - Search Insert Position](https://leetcode.com/problems/search-insert-position/)
- [Leetcode - First Bad Version](https://leetcode.com/problems/first-bad-version/)
- [Leetcode - Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)
- [Leetcode - Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/)
- [Leetcode - Find Smallest Letter Greater Than Target](https://leetcode.com/problems/find-smallest-letter-greater-than-target/)
- [Leetcode - Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/)
- [Leetcode - Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)
- [Leetcode - Search in a Sorted Array of Unknown Size](https://leetcode.com/problems/search-in-a-sorted-array-of-unknown-size/)
- [Leetcode - Find in Mountain Array](https://leetcode.com/problems/find-in-mountain-array/)
- [Leetcode - Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)
