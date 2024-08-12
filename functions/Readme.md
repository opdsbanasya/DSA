# Function
- It linked with a well define task.
- Or can say it is a `block of code` that perform a specific task.
- It is a reusable code.

# Why
Suppose you have a task that you have to perform multiple times in your program then you can write a function for that task and you can call that function whenever you want to perform that task.
Mean Function `reduce the redundancy` of code.

# Syntax
```cpp
return_type function_name(parameters){
    // code
}
```
if function does not return anything then `return_type is void`.

# What is return 0
meaning of return 0 in c++ programming is the program has been `executed successfully` without any error.

# Why main function call automatically
main function is the `entry point` of the program. When we run the program, the `operating system` automatically calls the main function.

# return 1 vs return -1
`return 1` means the program has been executed successfully but `return -1` means the program has been executed with some error.

# Function order
In C++, the function must be `declared` before in `main function` and also before the `function call`. Otherwise, the compiler will give an error. The function can be `defined` anywhere.


# function call stack
- It is a stack data structure.
- It is used to store the function call.
- When a function is called, the function call is `pushed` into the stack.
- When the function is returned, the function call is `pop` from the stack.

# Pass by value vs Pass by reference
**pass by value**: `Value` of the actual parameter is copied into the formal parameter.
**pass by reference**: `Address` of the actual parameter is copied into the formal parameter.

# Parameter vs Argument
Parameter: The variable in the function declaration is called parameter.
Argument: The actual value of the variable is called argument.
```cpp
int add(int a, int b){
    // a and b are parameter
    return a+b;
}
int main(){
    int x = 10, y = 20;
    cout<<add(x, y); // x and y are argument
}
```

# Problems
- WAP to print a Message.
- WAP to add two numbers.
- WAP to find the maximum of two numbers.
- WAP to find the maximum of three numbers.
- WAP to find the factorial of a number.
- WAP to find the sum of n natural numbers.
- WAP to find the sum of n even numbers.
- WAP to find the num is prime.
- WAP to find the all prime numbers.

# Number System:
Method to represent numeric values or quantities using digits.
- #### Decimal Number System:
    - base 10
    - digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
- #### Binary Number System:
    - base 2
    - digits: 0, 1

### Conversion:
- #### Decimal to Binary:
    - **Division Method:**
        - Divide number by 2.
        - store the remainder.
        - repeat the process until the number is greater than 0.
        - reverse the remainder.
        - Example: let number is 10.
        ```
        |   Decimal     |   Remainder  |
        |---------------|--------------|
        |   10/2 -> 5   |       0      |
        |   5/2 -> 2    |       1      |
        |   2/2 -> 1    |       0      |
        |   1/2 -> 0    |       1      |
        ```
        - Answer: 1010
    - **Bitwise Method:**
        - obtain bit with `bitwise AND operator(&)` with 1.
        - `right shift(>>)` the number by 1.
        - `repeat` the process until the number is greater than 0.
        - `reverse` the bit.
        - Example: let number is 10.
        ```
        10 -> (1010 & 1) -> 0
        10>>1 -> 5 -> (101 & 1) -> 1
        5>>1 -> 2 -> (10 & 1) -> 0
        2>>1 -> 1 -> (1 & 1) -> 1
        1>>1 -> 0 -> (0 & 1) -> 0
        ```
        - Answer: `1010`
- #### Binary to Decimal:
    - **Multiplication Method:**
        - Multiply each digit by `2^position`.
        - Add all the result.
        - Example: let number is 1010.
        ```
        1*2^3 + 0*2^2 + 1*2^1 + 0*2^0
        8 + 0 + 2 + 0
        ```
        - Answer: 10