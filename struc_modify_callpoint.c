#include <stdio.h>
struct Student 
{
    int id;
    float marks;
};
void modifyByValue(struct Student s) 
{
    s.id = 999;
    s.marks = 100;
    printf("\nInside modifyByValue (after change):\n");
    printf("ID    : %d\n", s.id);
    printf("Marks : %.2f\n", s.marks);
}
void modifyByPointer(struct Student *s) 
{
    s->id = 888;
    s->marks = 95;
    printf("\nInside modifyByPointer (after change):\n");
    printf("ID    : %d\n", s->id);
    printf("Marks : %.2f\n", s->marks);
}
int main() 
{
    struct Student s;
    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    modifyByValue(s);
    printf("\nAfter modifyByValue in main:\n");
    printf("ID    : %d\n", s.id);
    printf("Marks : %.2f\n", s.marks);
    modifyByPointer(&s);
    printf("\nAfter modifyByPointer in main:\n");
    printf("ID    : %d\n", s.id);
    printf("Marks : %.2f\n", s.marks);
    return 0;
}
