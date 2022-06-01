#include <stdio.h>
#include <string.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char *name[100];
    int class;
    int roll;
    struct Date dob;
};

int main()
{
    struct Student s1;
    s1.name[0] = "Peter Paker";
    s1.class = 4;
    s1.roll = 23;
    

    printf("%s %d %d", s1.name[0], s1.class, s1.roll);

    return 0;
}