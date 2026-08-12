 #include <stdio.h>
 struct Student
 {
    int id;
    char name[50];
    float marks;
 };
 int main()
 {
    struct Student s;
    struct Student *ptr;
    ptr = &s;
    printf("Enter Student ID: ");
    scanf("%d", &ptr->id);
    printf("Enter Student Name: ");
    scanf(" %[^\n]", ptr->name);
    printf("Enter Student Marks: ");
    scanf("%f", &ptr->marks);
    printf("\nStudent Details\n");
    printf("ID    : %d\n", ptr->id);
    printf("Name  : %s\n", ptr->name);
    printf("Marks : %.2f\n", ptr->marks);
    return 0;
 }
