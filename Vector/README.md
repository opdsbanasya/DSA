## vector
vector is a `dynamic array` in c++ which can grow and shrink in size.
- **declaration**: first we need to include the vector header file. Then we use `vector<dataType> name`
- **initialization**: there are `3 ways` to initialise a vector
    1. _Direct Initialization_ : `vector<dataTypes> name{allValues}`
    2. _Fill all values_ : `vector<dataType> name(size, value)`
    3. *using push_back* : `name.push_back(value)`
- Example
```cpp
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;

    // push_back
    arr.push_back(5);
    arr.push_back(6);

    // fill
    vector<int> brr(10, 8);

    // direct initialization
    vector<int> crr{1,2,3,4,5,6};

    return 0;
}
```
- we can take `user input` of vector size
```cpp
int n;
cout<<"Enter the size of vector"<<endl;
cin>>n

vector<int> arr(n)
```

### some methods
- **size()**: it returns the `size` of an vector.
- **capacity()**: it returns number of element that vector `can store`.
```cpp
vector<int> arr(8);
arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
int arrSize = arr.size();
// o/p : 3

int arrCap = arr.capcity()
// o/p : 8
```
- **empty()**: it return bool values `false` and `true`

## vector of vector
- vector of vector is a `2D vector`.
- **declaration**: `vector<vector<dataType>> name`
- **initialization**: `vector<vector<dataType>> name(row, vector<dataType>(col, value))`
```cpp
vector<vector<int>> arr(3, vector<int>(3, 0));
```

- **push_back**: `name.push_back(vector<dataType>(col, value))`
```cpp
vector<vector<int>> arr;
arr.push_back(vector<int>{3, 6});
arr.push_back(vector<int>{3, 5});
```
or you can push back a vector
```cpp
vector<vector<int> > v;
vector<int> temp{1, 2, 3};
v.push_back(temp);
```
- **accessing**: `arr[row][col]`
- **size()**: it returns the `size` of an vector.
    number of rows: `arr.size()`
    number of cols: `arr[0].size()` (if all rows have same number of cols otherwise you can row number)

## there some problems
- [Unique Element - use XOR]() => [Solution](./findUniqueElement.cpp)
- [Union of two arrays]() => [Solution](./UnionOfTwoArrays.cpp)
- [Intersection of two arrays]() => [Solution](./intersectionOfTwoArrays.cpp)
- [2 sum ](https://leetcode.com/problems/two-sum/description/?envType=problem-list-v2&envId=array) => [Solution](./TwoSum.cpp)
- [3 sum]() => [Solution](./threeSum.cpp)
- [sort zeros and ones - use dutch national flag algorithm]() => [Solution](./sortZeroesAndOne.cpp)
- [buy and sell stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=problem-list-v2&envId=array) => [Solution](./bestTimeToBuyAndSellStock.cpp)
- [Sort Colors(sort 0,1,2) - use dutch national flag algorithm]() => [Solution](./sortColor.cpp)
- [Move All Negative Numbers to left]() => [Solution](./moveAllNegToLeft.cpp)
- [Move all negative elements to end(gfg)]() => [Solution]()
- [Move Zeroes to end(lc)]() => [Solution]()
- [left rotate an array by 1]() => [Solution]()
- [majority element]() => [Solution]()
- [Find Duplicate]() => [Solution](./findDuplicate.cpp)
- [Find Missing Number]() => [Solution](./findMissing.cpp)
- [First Repeated element]() => [Solution](./firstRepeated.cpp)
- [Common Element from 3 sorted array]() => [Solution](./commonElemsFromThreeSortedArray.cpp)
- [Remove Element](https://leetcode.com/problems/remove-element/description/?envType=problem-list-v2&envId=array) => [Solution](./removeDuplicate.cpp)
- [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=problem-list-v2&envId=array) => [Solution](./removeDuplicate.cpp)