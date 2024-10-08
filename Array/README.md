## Array
- Array is a linear data structure that store similar data type element.
- Continuous memory allocation to array.
- Array have fixed size.
- Array index start from 0. because it help to finding the address of element in array.
```
address of ith element = base address + (index * size of data type)

-> here base address is the address of 0th element.
```
### Why need array?`
- To store similar data type element.
- To store large number of element.
- To store element in continuous memory allocation and ordered way.
### Array declaration and initialization
array declared by `data_type array_name[size];`
arra initialization by `data_type array_name[size] = {value1, value2, value3, ...};`
```cpp
int arr[8]; // declaration
int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8}; // initialization
```

### Accessing array element
```cpp
int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
cout << arr[0]; // 1
cout << arr[1]; // 2
// and so on

// accessing array element using loop
```cpp
for(int i = 0; i < 8; i++) {
    cout << arr[i] << " ";
}
```


## memset function
- memset function is used to fill a block of memory with a particular value.
Syntax: `memset(str,ch, n);`
```cpp
void *memset(arr, 1, size);
```

## 2D Array
- An array that have number of rows and number of columns.
- 2D array is a collection of 1D array.
- **Memory allocation**: memory allocation in 2d arrayb is continous. but there are rows and cols for visualization.
```
1 2 3
4 5 6       ->      1 2 3 4 5 6 7 8 9
7 8 9
```
- **Declaration**: `dataType name[no. of rows][no. of columns];`
- **Initialization**: `dataType name[no. of rows][no. of columns] = {{values...}, {values...}, {values...}, ...};`
```cpp
int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```
- **accessing**: there are 2 tpye of accessing 2d array element.
    - row-wise accessing : `arr[row][col]`
    - column-wise accessing: `arr[col][row]`

**_MAKE SURE_**: when you declaring a 2d array as a parameter that must give number of columns otherwise it will give error.
```cpp
void fun(int arr[][3]) {
    // code
}
```


## There are some problems on array
- Linear search
- Count 0's and 1's
- Max and min element
- Extreme print -> print first and last element
- Reverse array
- Transpose of matrix