# C++ Pointer Cheat Sheet

## 📝 Symbol Table
- ✨ There is a data structure known as the **symbol-table** that stores variable names and their values in a map.
- ⚖️ The **address-of operator** (`&`) is used to display addresses, which are shown in hexadecimal format.

### 💡 Example:
```cpp
int x = 10;
cout << x << endl;  // 10
cout << &x << endl; // 0x7fffbf7b3b7c
```
| Symbol Table |
|-------------|
| Variable Name, Address |
| x, 0x7fffbf7b3b7c |

## 🔮 Pointers
- ⚙️ A **pointer** is a variable that stores the memory address of another variable.
- ♻️ It is used to share a memory address and perform efficient memory management.

### ✏️ Syntax:
```cpp
data_type *pointer_variable = &variable_name;
```
### 💡 Example:
```cpp
int x = 10;
int *p = &x;
cout << p << endl;  // 0x7fffbf7b3b7c
cout << *p << endl; // 10
```
- `int *p`: 👉 Declares `p` as a pointer to an integer.
- `&x`: 👉 Stores the address of `x` in `p`.
- `*p`: 👉 Dereferences `p` to get the value of `x`.

### 🎨 Pointer Access:
```cpp
int x = 10;
int *p = &x;
cout << *p << endl; // 10
```

### 🛠️ Important Concepts:
| Expression | Meaning |
|------------|----------|
| `x` | Value stored in `x` |
| `&x` | Address of `x` |
| `ptr` | Address stored in `ptr` |
| `&ptr` | Address of pointer `ptr` |
| `*ptr` | Value at the address stored in `ptr` |

## 📊 Size of a Pointer
- ⚡ The size of a pointer does **not** depend on the data type.
- ⚖️ It stores an **address**, which is always the same size (typically 8 bytes on a 64-bit system).

### 💡 Example:
```cpp
int x = 10;
char y = 'A';
int *p = &x;
char *q = &y;
cout << sizeof(p) << endl; // 8
cout << sizeof(q) << endl; // 8
```
### 📌 **Pointer Size in 64-bit vs 32-bit Systems** 
- **In a 64-bit system** 🖥️  
   - The memory addresses are **64 bits** (8 bytes) long.
   - This allows addressing up to **\(2^{64}\)** memory locations.
   - So, all pointers (irrespective of data type) occupy **8 bytes**.

- **In a 32-bit system** 💾  
   - The memory addresses are **32 bits** (4 bytes) long.
   - This allows addressing up to **\(2^{32}\)** memory locations.
   - So, all pointers occupy **4 bytes**.

### 📌 **Why Same Size for Different Data Types?**
Pointers store **memory addresses**, not values. The memory address size depends on the system's addressing capability, **not** the data type being pointed to.
- On a **64-bit system**, `sizeof(p)`, `sizeof(q)`, and `sizeof(r)` will all be **8 bytes**.
- On a **32-bit system**, they will all be **4 bytes**.
- The pointer size determines how much memory can be addressed.

## 📈 Why Use Pointers?
- 🏢 Memory sharing.
- ⚖️ Dynamic memory allocation.
- 🌐 Memory arithmetic operations.
- 📝 Accessing array elements efficiently.
- 🔄 Passing function arguments efficiently.

## ⚠️ Null Pointers
- ⛔ A **null pointer** points to `0`, meaning it does not reference any valid memory.

### 💡 Example:
```cpp
int *p = 0;
int *q = nullptr;
```

## 🔒 Good vs Bad Pointers
| Type | Description |
|------|-------------|
| ❌ **Bad Pointer** | Uninitialized pointer (may point to garbage) |
| ✅ **Good Pointer** | Initialized pointer (points to valid memory) |

### 💡 Example:
```cpp
int *p;      // Bad Pointer
int *q = 0;  // Good Pointer
```

## 💲 Pointer Arithmetic
- ➕ Pointers can be used in arithmetic operations.
- 🌐 Useful for **array traversal** and **dynamic memory manipulation**.

### 💡 Example:
```cpp
int a = 10;
int *p = &a;
cout << *p << endl;  // 10
*p = *p + 1;
cout << *p << endl;  // 11
```

## 🔄 Copying Pointers
- ♻️ One pointer can be assigned to another.

### 💡 Example:
```cpp
int a = 10;
int *p = &a;
int *q = p;
cout << *q << endl; // 10
```

