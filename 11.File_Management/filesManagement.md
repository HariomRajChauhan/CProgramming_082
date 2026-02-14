# **Chapter: File Handling in C**

### *C Programming Workshop*

---

## **Slide 1: Chapter Title**

## **File Handling in C**

* Permanent data storage
* Reading and writing files
* Text and binary files

---

## **Slide 2: Chapter Overview**

In this chapter, we will learn:

* Introduction to files
* Why file handling is needed
* File pointer and syntax
* File opening modes
* File operations (read/write)
* Text vs Binary files
* Random access functions
* Error handling in files

---

# **1. Introduction to File**

---

## **Slide 3: What is a File?**

A **file** is a collection of data stored permanently on secondary storage (Hard Disk).

📌 Variables store data temporarily (RAM).
📌 Files store data permanently.

---

## **Slide 4: Why File Handling?**

* Store large data
* Permanent storage
* Data reuse
* Database-like applications
* Record keeping

---

# **2. File Pointer**

---

## **Slide 5: FILE Pointer**

In C, file handling is done using a pointer of type `FILE`.

```c
FILE *fp;
```

📌 Defined in `<stdio.h>`

---

# **3. Opening a File**

---

## **Slide 6: fopen() Function**

```c
fp = fopen("filename", "mode");
```

Example:

```c
fp = fopen("data.txt", "r");
```

---

## **Slide 7: File Modes**

| Mode   | Meaning           |
| ------ | ----------------- |
| `"r"`  | Read              |
| `"w"`  | Write (overwrite) |
| `"a"`  | Append            |
| `"r+"` | Read & Write      |
| `"w+"` | Write & Read      |
| `"a+"` | Append & Read     |
| `"rb"` | Read binary       |
| `"wb"` | Write binary      |

---

# **4. Closing a File**

---

## **Slide 8: fclose()**

```c
fclose(fp);
```

📌 Always close file after use.

---

# **5. Writing to File**

---

## **Slide 9: fprintf()**

```c
fprintf(fp, "Hello World");
```

Example:

```c
fp = fopen("data.txt", "w");
fprintf(fp, "C Programming");
fclose(fp);
```

---

## **Slide 10: fputc()**

Writes a single character.

```c
fputc('A', fp);
```

---

## **Slide 11: fputs()**

Writes a string.

```c
fputs("Hello", fp);
```

---

# **6. Reading from File**

---

## **Slide 12: fscanf()**

```c
fscanf(fp, "%s", str);
```

---

## **Slide 13: fgetc()**

Reads one character.

```c
char ch = fgetc(fp);
```

---

## **Slide 14: fgets()**

Reads a line from file.

```c
fgets(str, 50, fp);
```

---

# **7. Text File vs Binary File**

---

## **Slide 15: Text File**

* Human readable
* Stores data as characters
* Uses fprintf/fscanf

---

## **Slide 16: Binary File**

* Not human readable
* Stores data in binary form
* Faster
* Uses fwrite/fread

---

# **8. Writing in Binary File**

---

## **Slide 17: fwrite()**

```c
fwrite(&s, sizeof(s), 1, fp);
```

Example:

```c
struct Student s;
fp = fopen("data.dat", "wb");
fwrite(&s, sizeof(s), 1, fp);
fclose(fp);
```

---

# **9. Reading from Binary File**

---

## **Slide 18: fread()**

```c
fread(&s, sizeof(s), 1, fp);
```

---

# **10. Random Access in File**

---

## **Slide 19: fseek()**

Moves file pointer.

```c
fseek(fp, offset, position);
```

Position:

* SEEK_SET
* SEEK_CUR
* SEEK_END

---

## **Slide 20: ftell()**

Returns current file pointer position.

```c
long pos = ftell(fp);
```

---

## **Slide 21: rewind()**

Moves pointer to beginning.

```c
rewind(fp);
```

---

# **11. Checking File Errors**

---

## **Slide 22: Checking NULL**

```c
if(fp == NULL)
{
    printf("File cannot be opened");
}
```

---

## **Slide 23: feof()**

Checks end of file.

```c
while(!feof(fp))
```

---

# **12. Complete Example: Writing & Reading**

---

## **Slide 24: Example**

```c
FILE *fp;
char str[50];

fp = fopen("data.txt", "w");
fprintf(fp, "Hello File");
fclose(fp);

fp = fopen("data.txt", "r");
fgets(str, 50, fp);
printf("%s", str);
fclose(fp);
```

---

# **13. Applications of File Handling**

---

## **Slide 25: Real-Life Uses**

* Student record system
* Bank management system
* Employee database
* Library management system
* Login system

---

# **14. Common Errors**

---

## **Slide 26: Mistakes to Avoid**

* Not checking NULL
* Forgetting fclose()
* Wrong file mode
* Using feof incorrectly
* Reading without opening

---

# **15. Best Practices**

---

## **Slide 27: Good Programming Practice**

* Always check file pointer
* Close file after use
* Use binary files for structures
* Avoid unsafe file operations

---

# **Final Slide**

---

## **Slide 28: Summary**

* Files store data permanently
* Use FILE pointer
* Use fopen() and fclose()
* Text and binary files
* Use fread/fwrite for structures