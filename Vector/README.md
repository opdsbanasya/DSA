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

## there some problems
- Unique Element
- Union of two arrays
- Intersection of two arrays
- Two sum
- 3 sum
- sort zeros and ones
- left rotate an array by 1
- majority element
- buy and sell stock