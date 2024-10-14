# Searching & Sorting
## Linear Search
In this algorithm, we simply iterate over the array and compare each element with the target element. If the element is found, we return the index of the element. Otherwise, we return -1.
- Time Complexity is Higher like O(n), O(n^2) etc.
- Example:
```cpp
for(0 -> n){
    for( 0 -> n){
        if(arr[i] == target){
            return i;
        }
    }
}
```

## Binary Search
In this algorithm, we first sort the array and then find the middle element of the array. If the middle element is equal to the target element, we return the index of the middle element. If the middle element is greater than the target element, we search in the left half of the array. If the middle element is less than the target element, we search in the right half of the array.
- It has less Time Complexity less than Linear Search like O(logn).
- **Logic**: It have 3 pointer:
    - start = 0;
    - end = n-1;
    - mid = (start + end) / 2;

- To resolve the issue of overflow, we can use the following formula to calculate the mid:
    - mid = start + (end - start) / 2;
- Example:
```cpp
while(start<=end){
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        end = mid - 1;
    }
    else{
        start = mid + 1;
    }
    mid = (start + end) / 2;
}
```

## STL functions for binary search
- **binary_search()**: It returns true if the element is found in the array, otherwise it returns false.
```cpp
binary_search(arr, arr+n, target); // for array
binary_search(v.begin(), v.end(), target); // for vector
```
- **lower_bound()**: It returns an iterator pointing to the first occurrence of the target element. If the element is not found, it returns an iterator pointing to the first element that is greater than the target element.
```cpp
lower_bound(arr, arr+n, target); // for array
```

- **upper_bound()**: It returns an iterator pointing to the last occurrence of the target element. If the element is not found, it returns an iterator pointing to the first element that is greater than the target element.
```cpp
upper_bound(arr, arr+n, target); // for array
```

## Problems
- Binary Search
- First & Last Occurrence of an element
- Peak element in a mountain array
- square root using binary search
- Binary search in 2D matrix
- find missing number
- pivot element
- find in rotated & sorted array
- Search in nearly sorted array
- Division of two numbers using binary search
- finding odd occurring number using binary search
- Search Insert Position
- K different Pairs
- K Closest Numbers
- [Book Allocation Problem](https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1)

# Exponential Search
It is based `Binary Search` and used for `large size array`. In this search method, first we find the `sub-array` that have target element, at the end binary search applied on subarray.
```cpp
int i = 0;
while(i<n && arr[i] <= x){
    i = i*2;
}

int positionOfX = binarySearch(arr, /*start*/ i/2, /*end*/ min(i, n-1), x);
// here start is i/2 because when we search subarray, we jump by step i*2, so when subarray found that i is at end of subarray.

// end is min(i, n-1) because if i is out of main array than it gives n-1;

return positionOfX;
```
### Application
- Search in unbounded(infinite) array
- Better the Binary Search when target is near to begin.
