# Array and Pointer in C

Arrays and pointers are fundamental concepts in C programming that deal directly with memory. Arrays allow storage of multiple values of the same data type, while pointers enable direct manipulation of memory addresses. Mastery of arrays and pointers is essential for understanding advanced C programming.

## 6.1 Introduction to an Array

An **array** is a collection of elements of the **same data type**, stored in **contiguous memory locations** and accessed using a common name.

### Key Characteristics
- Stores multiple values using one variable name
- All elements are of the same data type
- Fixed size (cannot change at runtime)
- Index starts from **0**

### Memory Representation
```

Index:   0   1   2   3   4
Value: 10  20  30  40  50

````

### Syntax
```c
data_type array_name[size];
````

Example:


int marks[5];
```

---

## 6.2 One-Dimensional Array

A **one-dimensional array** stores elements in a linear form.

### Declaration

```c
int a[5];
```

### Initialization

```c
int a[5] = {10, 20, 30, 40, 50};
```

### Partial Initialization

```c
int a[5] = {1, 2};
```

Remaining elements are set to `0`.

### Accessing Elements

```c
a[0] = 100;
printf("%d", a[2]);
```

### Traversing an Array

```c
for(int i = 0; i < 5; i++)
    printf("%d ", a[i]);
```

---

## 6.3 Two-Dimensional Array

A **two-dimensional array** is an array of arrays, commonly used to represent **tables and matrices**.

### Declaration

```c
int mat[3][3];
```

### Initialization

```c
int mat[2][2] = {{1,2},{3,4}};
```

### Memory Representation

```
mat[0][0] mat[0][1]
mat[1][0] mat[1][1]
```

### Accessing Elements

```c
printf("%d", mat[1][0]);
```

### Traversing 2D Array

```c
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++)
        printf("%d ", mat[i][j]);
}
```

---

## 6.4 Multidimensional Array

An array having **more than two dimensions** is called a multidimensional array.

### Example

```c
int a[2][3][4];
```

### Applications

* Scientific calculations
* 3D data representation
* Advanced simulations

📌 Rarely used in beginner programs but important conceptually.

---

## 6.5 Introduction to String

A **string** is a collection of characters stored in a character array and terminated by a **null character (`'\0'`)**.

### Declaration

```c
char name[20];
```

### Initialization

```c
char name[] = "Programming";
```

### Character-wise Representation

```
P r o g r a m m i n g \0
```

📌 `'\0'` tells the compiler where the string ends.

---

## 6.6 String Handling Functions

String functions are available in the **`<string.h>`** header file.

### Commonly Used Functions

#### `strlen()`

Returns length of string (excluding `\0`)

```c
int len = strlen(str);
```

#### `strcpy()`

Copies one string to another

```c
strcpy(dest, src);
```

#### `strcat()`

Concatenates two strings

```c
strcat(str1, str2);
```

#### `strcmp()`

Compares two strings

```c
if(strcmp(a,b)==0)
    printf("Equal");
```

---

## 6.7 Definition of a Pointer

A **pointer** is a variable that stores the **memory address of another variable**.

### Why Pointers?

* Dynamic memory handling
* Efficient array and string processing
* Function call by reference

### Declaration

```c
int *p;
```

---

## 6.8 Pointer Declaration

### Example

```c
int x = 10;
int *p = &x;
```

* `&x` → address of `x`
* `p` → stores address
* `*p` → value at address

```c
printf("%d", *p);  // Output: 10
```

---

## 6.9 Pointer Arithmetic

Pointer arithmetic allows movement through memory locations.

### Supported Operations

* Increment (`p++`)
* Decrement (`p--`)
* Addition (`p + n`)
* Subtraction (`p - n`)

### Example

```c
int a[3] = {10,20,30};
int *p = a;
p++;
```

📌 Pointer moves by **size of data type**, not by 1 byte.

---

## 6.10 Relationship between Pointer and Arrays

* Array name represents **address of first element**
* Internally, arrays are accessed using pointers

### Example

```c
int a[5] = {1,2,3,4,5};
int *p = a;
```

```c
printf("%d", *(p+3));  // Output: 4
```

### Important Relation

```c
a[i] == *(a + i)
```

---

## Common Errors to Avoid

* Accessing array out of bounds
* Forgetting `'\0'` in strings
* Using uninitialized pointers
* Confusing `*` and `&`
* Modifying array size at runtime

---

## Best Practices

* Always check array bounds
* Initialize pointers before use
* Use string functions safely
* Avoid unnecessary pointer arithmetic
* Comment pointer-based logic

---

## Practice Problems

1. Find largest and smallest element in an array
2. Matrix multiplication using 2D arrays
3. Reverse a string without library functions
4. Swap two numbers using pointers
5. Access array elements using pointer arithmetic

---

## Summary

Arrays help manage multiple data items efficiently, while pointers provide powerful control over memory. Together, arrays and pointers form the backbone of C programming and enable high-performance and system-level programming.

---

### 📘 End of Chapter: Array and Pointer

```

---

If you want next:
- **Slides for Array & Pointer**
- **Lab manual with answers**
- **Short notes for exams**
- **Chapter 9: Structure & File Handling**

Just tell me bro 👊
```
