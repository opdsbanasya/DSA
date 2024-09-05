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
- find missing number
- square root using binary search
- pivot element
- find in rotated & sorted array
- Binary search in 2D matrix
- Search in nearly sorted array
- Division of two numbers using binary search
- finding odd occurring number using binary search