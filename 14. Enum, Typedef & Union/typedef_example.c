#include <stdio.h>

typedef int INTEGER;

typedef struct {
    int roll;
    char name[30];
} Student;

int main() {
    INTEGER a = 10;
    Student s;

    s.roll = 1;
    printf("Enter name of student: ");
    scanf("%s", s.name);

    printf("a = %d\n", a);
    printf("Student Roll = %d\n", s.roll);
    printf("Student Name = %s\n", s.name);

    return 0;
}
