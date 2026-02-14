# **Chapter: Structures in C**

### *C Programming Workshop*

---

## **Slide 1: Chapter Title**

## **Structures in C**

* User-defined data type
* Grouping different data types
* Foundation for advanced data structures

---

## **Slide 2: Chapter Overview**

In this chapter, we will learn:

* Introduction to structure
* Why structure is needed
* Declaration and definition
* Accessing structure members
* Array of structures
* Nested structures
* Structure and functions
* Pointer to structure

---

# **1. Introduction to Structure**

---

## **Slide 3: What is a Structure?**

A **structure** is a user-defined data type that allows grouping of **different types of data** under one name.

📌 Unlike arrays (same type), structure stores **different data types together**.

---

## **Slide 4: Why Do We Need Structure?**

Suppose we want to store:

* Student name
* Roll number
* Marks

Instead of:

```c
char name[20];
int roll;
float marks;
```

We use:

```c
struct Student
{
    char name[20];
    int roll;
    float marks;
};
```

---

# **2. Declaration and Definition**

---

## **Slide 5: Structure Declaration Syntax**

```c
struct structure_name
{
    data_type member1;
    data_type member2;
};
```

---

## **Slide 6: Defining Structure Variable**

```c
struct Student s1;
```

Or

```c
struct Student s1, s2;
```

---

## **Slide 7: Complete Example**

```c
struct Student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    struct Student s1;
}
```

---

# **3. Accessing Structure Members**

---

## **Slide 8: Dot (.) Operator**

Used to access structure members.

```c
s1.roll = 10;
```

---

## **Slide 9: Input and Output Example**

```c
scanf("%s", s1.name);
scanf("%d", &s1.roll);
scanf("%f", &s1.marks);

printf("%s %d %.2f", s1.name, s1.roll, s1.marks);
```

---

# **4. Initialization of Structure**

---

## **Slide 10: Structure Initialization**

```c
struct Student s1 = {"Ram", 101, 85.5};
```

---

# **5. Array of Structures**

---

## **Slide 11: Why Array of Structure?**

To store records of multiple students.

---

## **Slide 12: Declaration**

```c
struct Student s[5];
```

---

## **Slide 13: Accessing Array of Structure**

```c
s[0].roll = 101;
```

---

## **Slide 14: Example Using Loop**

```c
for(int i=0;i<5;i++)
{
    scanf("%s", s[i].name);
}
```

---

# **6. Nested Structure**

---

## **Slide 15: What is Nested Structure?**

A structure inside another structure.

---

## **Slide 16: Example**

```c
struct Date
{
    int day, month, year;
};

struct Student
{
    char name[20];
    struct Date dob;
};
```

Access:

```c
s1.dob.day = 12;
```

---

# **7. Structure and Functions**

---

## **Slide 17: Passing Structure to Function (Call by Value)**

```c
void display(struct Student s)
{
    printf("%d", s.roll);
}
```

📌 Entire structure is copied.

---

## **Slide 18: Passing Structure by Reference**

```c
void display(struct Student *s)
{
    printf("%d", s->roll);
}
```

---

# **8. Pointer to Structure**

---

## **Slide 19: Pointer to Structure**

```c
struct Student s1;
struct Student *ptr = &s1;
```

---

## **Slide 20: Arrow (->) Operator**

Used with pointer to structure.

```c
ptr->roll = 101;
```

📌 Equivalent to:

```c
(*ptr).roll
```

---

# **9. typedef with Structure**

---

## **Slide 21: Using typedef**

```c
typedef struct
{
    int roll;
    float marks;
} Student;

Student s1;
```

📌 No need to write `struct` again.

---

# **10. Structure vs Array**

---

## **Slide 22: Difference**

| Structure            | Array          |
| -------------------- | -------------- |
| Different data types | Same data type |
| User-defined         | Built-in       |
| Uses dot operator    | Uses index     |

---

# **11. Memory Allocation of Structure**

---

## **Slide 23: Memory Concept**

* Structure members stored sequentially
* Size may include padding
* Use `sizeof()` to check

```c
sizeof(struct Student);
```

---

# **12. Common Errors**

---

## **Slide 24: Mistakes to Avoid**

* Forgetting `;` after structure
* Using `.` instead of `->`
* Not initializing structure properly
* Forgetting `&` in scanf

---

# **13. Applications of Structure**

---

## **Slide 25: Real-World Uses**

* Student record system
* Employee database
* Bank management system
* Library management
* File handling

---

# **14. Practice Problems**

---

## **Slide 26: Practice Questions**

1. Store 5 students’ details using structure
2. Create array of structure and display highest marks
3. Pass structure to function and print data
4. Use pointer to structure

---

# **Final Slide**

---

## **Slide 27: Summary**

* Structure groups different data types
* Use dot (.) operator
* Use arrow (->) with pointer
* Array of structure stores multiple records
* Nested structure increases complexity