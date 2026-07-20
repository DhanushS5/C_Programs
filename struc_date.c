 #include <stdio.h>
 struct date
 {
    int date;
    int month;
    int  year;
 };
 int main()
 {
    struct date d;
    printf("Enter date: ");
    scanf("%d", &d.date);
    printf("Enter month: ");
    scanf(" %d", &d.month);
    printf("Enter year: ");
    scanf("%d", &d.year);
    printf("Date is %02d/%02d/%04d",d.date,d.month,d.year);
    return 0;
 }
