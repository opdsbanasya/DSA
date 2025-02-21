# Basic Mathematics for DSA

## Prime Numbers 🔢
- Number is prime if it is divisible by 1 and itself only and have 2 factors.
- There are methods to check if a number is prime or not:
    - Naive Method 🐢
    - Square Root Method 📐
    - Sieve of Eratosthenes 🧹
    - Segmented Sieve 🧩

### 🐢 Naive Method
- Check if a number is divisible by any number from 2 to n-1.
- Time Complexity: O(n)
- Example:
    - 7 is prime because it is divisible by 1 and 7 only.
    - 9 is not prime because it is divisible by 1, 3, and 9.
- Code:
```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```

### 📐 Square Root Method
- Check at least one of the factor must be smaller than sqrt(n), If we can't find an effect less than sqrt(n), then n is prime.
- Time Complexity: O(sqrt(n))
- Code:
```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```

### 🧹 Sieve of Eratosthenes
- Given a number n, to count the number of prime numbers less than n.
- let n = 16
- **Step 1**: Create an array from 2 to n-1 and flag all as prime(true).
```
2 3 4 5 6 7 8 9 10 11 12 13 14 15
T T T T T T T T T  T  T  T  T  T
```
- **Step 2**: Start from 2, mark all the multiples of 2 as false.
```
2 3 4 5 6 7 8 9 10 11 12 13 14 15
T T F T F T F T F  T  F  T  F  T
```
- **Step 3**: Repeat `Step 2` for all prime numbers till n-1
```
2 3 4 5 6 7 8 9 10 11 12 13 14 15
T T F T F T F F F  T  F  T  F  F
```
- **Step 4**: Count all the prime numbers, There are `6` prime numbers less than `16`.
- Time Complexity: O(n log log n)
- Code:
```cpp
int countPrimes(int n) {
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    int ans = 0;
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            ans++;
            int j = 2*i;
            while(j < n){
                isPrime[j] = false;
                j += i;
            }
        }
    }
    return ans;
}
```

### 🧩 Segmented Sieve
- Given a range `[L, R]`, to count the number of prime numbers in the range.
- Based on the Sieve of Eratosthenes.

## GCD/HCF 🧮
- GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers is the largest number that divides both of them.
- Euclidean Algorithm is used to find GCD.
- Formula: `gcd(a, b) = gcd(a-b, b)` if a > b
           `gcd(a, b) = gcd(a, b-a)` if b > a
- Apply the formula until one of the parameter becomes 0.
- **Code**:
```cpp
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    while(a>0 && b>0){
        if(a > b) a = a - b;
        else b = b - a;
    }
    return a > b ? a : b;
}
```

## LCM 🧮
- LCM (Least Common Multiple) of two numbers is the smallest number which can be divided by both numbers.
- Formula: `lcm(a, b) = (a*b) / gcd(a, b)`

## Modular Arithmetic 🧮
- In mathematics, modular arithmetic is a system of arithmetic for integers, where numbers "wrap around" when reaching a certain value, called the modulus.
- It is used to find the remainder of a number when divided by another number.
- `a % n` = [0, 1, 2, ..., n-1]
- **Properties**:
    - `(a + b) % m = a % m + b % m`
    - `(a - b) % m = a % m - b % m`
    - `((a % m) % m) % m = a % m`
    - `(a * b) % m = a % m * b % m`

## Fast Exponentiation 🧮
- To calculate `a^b` in O(log b) time.
- **Code**:
```cpp
int fastExpo(int a, int b){
    int ans = 1;
    while(b > 0){
        if(b & 1) ans = ans * a; // if b is odd
        a = a * a;
        b >> 1; // b = b/2
    }
    return ans;
}
```

## Advanced Topics
### 🕳️ Pigeon Hole Principle
- If `n` items are put into `m` containers, with `n > m`, then at least one container must contain more than one item.

### 🌳 Catalan Number (BST)
- Catalan numbers are a sequence of natural numbers that occur in various counting problems, often involving recursively-defined objects.
- Example: Number of Binary Search Trees (BST) with `n` nodes.

### ➕ Inclusion-Exclusion Principle
- A counting technique to find the number of elements in the union of several sets.
- Formula: `|A ∪ B| = |A| + |B| - |A ∩ B|`

### 👽 Chinese Remainder Theorem
- A theorem of number theory which allows one to solve simultaneous congruences with different moduli.

### 📜 Lucas' Theorem
- A theorem giving a congruence relation between binomial coefficients and prime numbers.

### 🏁 Fermat's Theorem
- Fermat's Little Theorem: If `p` is a prime number, then for any integer `a`, the number `a^p - a` is an integer multiple of `p`.

### 🎲 Probability Concepts
- Basic concepts of probability including events, sample space, and probability axioms.
- Example: Probability of an event `A` is `P(A) = Number of favorable outcomes / Total number of outcomes`.

##  🚀 Problems
- Count Primes
- GCD of two numbers
- Modular Exponentiation for large numbers