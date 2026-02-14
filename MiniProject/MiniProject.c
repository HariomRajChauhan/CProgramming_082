// 1. Add Student Record
// 2. Display All Records
// 3. Search Student by Roll Number
// 4. Update Student Record
// 5. Delete Student Record
// 6. Exit

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int roll;
    char name[50];
    float marks;
} Students;

void addStudents()
{
    FILE *fp = fopen("Students.dat", "ab");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    Students s;

    printf("Enter Roll no: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %49[^\n]", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    printf("New Student Added Successfully!\n");
}

void Display()
{
    FILE *fp;
    fp = fopen("Students.dat", "rb");

    Students s;

    printf("\n---Students Record---\n");

    while (fread(&s, sizeof(s), 1, fp))
    {
        printf("Roll : %d \nName : %s\nMarks : %f\n", s.roll, s.name, s.marks);
        printf("---------------\n");
    }
    fclose(fp);
}
void SearchStudents()
{
    FILE *fp;
    fp = fopen("Students.dat", "rb");

    Students s;
    int roll;
    int found = 0;
    printf("Enter Roll no to Search :");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp))
    {
        if (roll == s.roll)
        {
            printf("---Record Founded---\n");
            printf("Name : %s\nMarks : %f\n", s.name, s.marks);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Roll no %d Not Found\n", roll);
    }

    fclose(fp);
}
void updateStudents()
{
    FILE *fp;
    fp = fopen("Students.dat", "rb+");

    if (fp == NULL)
    {
        printf("File not found!\n");
        return;
    }

    Students s;

    int roll;
    int found = 0;
    printf("Enter Roll no to Update :");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (roll == s.roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s.name);

            printf("Enter New Marks: ");
            scanf("%f", &s.marks);

            fseek(fp, -(long)sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);

            printf("Record Updated!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Record Not Found\n");

    fclose(fp);
}
void DeleteStudents()
{
    FILE *fp;
    fp = fopen("Students.dat", "rb");

    FILE *temp;
    temp = fopen("temp.dat", "wb");

    Students s;

    int roll;

    printf("Enter Roll no to Delete :");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp))
    {
        if (roll != s.roll)
        {
            fwrite(&s, sizeof(s), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("Students.dat");
    rename("temp.dat", "Students.dat");

    printf("Record Deleted Successfully!\n");
}

int main()
{
    int choice;

    while (1)
    {
        system("pause");
        printf("====Students Management System====\n\n");
        printf("1.ADD Students\n");
        printf("2.Display Students\n");
        printf("3.Search Students\n");
        printf("4.Update Students\n");
        printf("5.Delete Students\n");
        printf("6.Clear Window\n");
        printf("7.Exit\n");

        printf("Enter one of them: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            // add studnet
            addStudents();
            break;
        case 2:
            Display();
            break;
        case 3:
            SearchStudents();
            break;
        case 4:
            updateStudents();
            break;
        case 5:
            DeleteStudents();
            break;
        case 6:
            system("cls");
            break;
        case 7:
            exit(0);

        default:
            printf("Invalid Choice!!\n");
            break;
        }
    }

    return 0;
}
