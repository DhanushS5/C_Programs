#include <stdio.h>
 struct Student
 {
    int id;
    char name[50];
    float marks;
 };
 void display(struct Student s)
 {
    printf("\nStudent Details:\n");
    printf("ID    : %d\n", s.id);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);
 }
 int main()
 {
    struct Student s;
    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    display(s);
    return 0;
 }
