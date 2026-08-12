#include <stdio.h>
 struct DOB
 {
    int day;
    int month;
    int year;
 };
 struct Person {
    char name[50];
    struct DOB d;
 };
 int main()
 {
    struct Person p;
    int currentDay, currentMonth, currentYear;
    int age;
    printf("Enter name: ");
    scanf(" %[^\n]", p.name);
    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d", &p.d.day, &p.d.month, &p.d.year);
    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);
    age = currentYear - p.d.year;
    if (currentMonth < p.d.month ||
       (currentMonth == p.d.month && currentDay < p.d.day))
       {
        age--;
       }
    printf("\nPerson Details\n");
    printf("Name : %s\n", p.name);
    printf("DOB  : %02d/%02d/%04d\n", p.d.day, p.d.month, p.d.year);
    printf("Age  : %d years\n", age);
    return 0;
 }
