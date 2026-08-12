 #include <stdio.h>
 struct Student
 {
    int roll;
    char name[20];
    float marks;
 };
 int main()
 {
    struct Student s1 = {101, "DHA", 45.2};
    struct Student s2 = {102, "NUS", 93.5};
    struct Student s3 = {103, "H RAJ", 80.5};
    struct Student *ptr[3];
    ptr[0] = &s1;
    ptr[1] = &s2;
    ptr[2] = &s3;
    printf("Student Details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Roll No: %d\n", ptr[i]->roll);
        printf("Name    : %s\n", ptr[i]->name);
        printf("Marks   : %.1f\n\n", ptr[i]->marks);
    }
    return 0;
 }
