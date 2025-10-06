#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    // Declare two Student variables
    struct Student student1, student2;

    // Manually assign values to the fields of student1
    strcpy(student1.name, "Alice Johnson");
    student1.id = 1001;
    student1.grade = 9.1;

    // Manually assign values to the fields of student2
    strcpy(student2.name, "Bob Smith");
    student2.id = 1002;
    student2.grade = 8.7;

    // Print information for student1
    printf("Student 1: %s, ID: %d, Grade: %.1f\n", student1.name, student1.id, student1.grade);

    // Print information for student2
    printf("Student 2: %s, ID: %d, Grade: %.1f\n", student2.name, student2.id, student2.grade);

    return 0;
}
