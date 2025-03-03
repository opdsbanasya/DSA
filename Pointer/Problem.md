# Question Time 🚀🚀

## 1. What will be the output of the following code?

```cpp
What will be the output ?
float f = 10.5;
float p = 2.5;
float* ptr = &f;
*ptr = p;
cout << *ptr << " " << f << " " << p;
```

## 2. What will be the output of the following code?

```cpp
int a = 7;
int b = 17;
int* c = &b;
cout<<a<<" "<<b;
```

## 3. What will be the output of the following code?

```cpp
int *ptr = 0;
int a = 10;
*ptr = a;
cout<<*ptr;
```

## 4. The memory addresses of variable B pointed by pointer a
```cpp
int b = 10;
int *a = &b;
cout<<a;
```

## 5. What will be the output of the following code?

```cpp
char ch = 'a';
char *ptr = &ch;
ch++;
cout<<*ptr<<endl;
```

## 6. What will be the output of the following code?

```cpp
int a = 7;
int *c = &a;
c = c + 1;
cout<<a<<" "<<*c;
```

## 7. Assume the memory address of variable `a`(and an integer takes 4 bytes), what will be the output of the following code?

```cpp
int a = 7;
int *c = &a;
c = c + 3 ;
cout<<c;
```

## 8. Assume memory address of `a` is `200` and a double variable is of size `8 bytes`, what will be the output of the following code?

```cpp
double a = 10.54;
double *d = &a;
d = d + 1;
cout<<d;
```

## 9. Assume integer takes `4 bytes` and integer pointer takes `8 bytes`, what will be the output of the following code?

```cpp
int a[5];
int *c;
cout<<sizeof(a)<<" "<<sizeof(c);
```

## 10. What will be the output of the following code?

```cpp
int a[] = {1,2,3,4,5};
cout<<*(a) <<" "<<*(a+1);
```