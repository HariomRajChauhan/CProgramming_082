# User-Defined Functions in C

User-defined functions allow programmers to divide a large program into **smaller, manageable, and reusable blocks of code**. This chapter focuses on understanding how functions work internally and how they improve program structure and efficiency.

---

## 7.1 Introduction to Function

A **function** is a block of code that performs a specific task.  
In C, functions help in breaking a program into smaller parts, each handling a specific responsibility.

### General Form of a Function

```c
return_type function_name(parameters) {
    // statements
}
```

📌 Example:

```c
int add(int a, int b) {
    return a + b;
}
```

---

## 7.2 Advantages of Function

Functions provide the following advantages:

* **Modularity** – Program is divided into logical units
* **Code Reusability** – Same function can be used multiple times
* **Readability** – Program becomes easy to understand
* **Debugging** – Errors can be fixed easily
* **Maintenance** – Changes can be done in one place

---

## 7.3 Elements of User-Defined Function

A user-defined function consists of three main elements:

1. Function definition
2. Function prototype
3. Function call

---

### 7.3.1 Function Definition

Contains the actual code of the function.

```c
int sum(int a, int b) {
    int s = a + b;
    return s;
}
```

Components:

* Return type
* Function name
* Parameters
* Function body

---

### 7.3.2 Function Prototype

Declares the function before it is used so that the compiler knows about it.

```c
int sum(int, int);
```

📌 Usually written before `main()`.

---

### 7.3.3 Function Parameters

Parameters are variables used to receive values from the calling function.

* **Formal Parameters** → variables in function definition
* **Actual Parameters** → values passed during function call

```c
sum(10, 20);   // actual parameters
int sum(int a, int b) // formal parameters
```

---

## 7.4 Storage Class

Storage class defines:

* Scope
* Lifetime
* Visibility of variables

### Types of Storage Classes:

1. `auto`
2. `register`
3. `static`
4. `extern`

📌 Auto:

```c
void myFunction() {
    auto int x; // Automatic variable
}
```

📌 Register:

```c
void myFunction() {
    register int x; // Register variable
}
```

📌 Static:

```c
void myFunction() {
    static int counter = 0; // Static variable
    counter++;
    printf("Function called %d times\n", counter);
}
```

📌 Extern:

```c
extern int globalVariable; // Declaration of external variable
```

---

## 7.5 Scope Rules

Scope defines **where a variable can be accessed**.

### Types of Scope:

* Local scope
* Global scope
* Block scope

```c
int x = 10; // global variable

void fun() {
    int y = 5; // local variable
}
```

---

## 7.6 Category of Functions

User-defined functions are categorized based on arguments and return values.

---

### 7.6.1 No Arguments and No Return Value

```c
void display() {
    printf("Hello World");
}
```

📌 Used when function only performs a task.

---

### 7.6.2 Arguments and No Return Value

```c
void sum(int a, int b) {
    printf("%d", a + b);
}
```

📌 Takes input but does not return value.

---

### 7.6.3 Arguments and Return Value

```c
int sum(int a, int b) {
    return a + b;
}
```

📌 Most commonly used category.

---

### 7.6.4 No Arguments and Return Value

```c
int getNumber() {
    return 10;
}
```

📌 Function generates its own data.

---

## 7.7 Recursive Functions

A **recursive function** is a function that calls itself.

### Example: Factorial

```c
int fact(int n) {
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
```

📌 Must have a **base condition** to stop recursion.

---

## 7.8 Function Call by Value and Reference

### Call by Value

* Copy of variable is passed
* Original value remains unchanged

```c
void change(int x) {
    x = 20;
}
```

---

### Call by Reference

* Address of variable is passed
* Original value changes

```c
void change(int *x) {
    *x = 20;
}
```

📌 Uses pointers.

---

## 7.9 Passing Array and String to Function

### Passing Array to Function

```c
void display(int a[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
```

---

### Passing String to Function

```c
void show(char str[]) {
    printf("%s", str);
}
```

📌 Arrays and strings are always passed by reference.

---

## Common Errors to Avoid

* Missing function prototype
* Mismatch between arguments and parameters
* Infinite recursion
* Wrong return type
* Using global variables unnecessarily

---

## Best Practices

* Use meaningful function names
* Keep functions small
* Avoid using `goto`
* Write one task per function
* Use comments for clarity

---

## Practice Problems

1. Write a function to find maximum of two numbers
2. Write a recursive function for Fibonacci series
3. Write a function to swap two numbers using call by reference
4. Pass an array to function and find sum of elements

---
