#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    int n; // Number of students
    struct Student *students; // Pointer to the dynamically allocated array of students

    // Prompt for number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    students = (struct Student *)malloc(n * sizeof(struct Student));
    
    // Check if memory allocation was successful
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error code if malloc fails
    }

    // Get student information from the user
    for (int i = 0; i < n; i++) {
        printf("Enter data for student %d: ", i + 1);
        // Use scanf to read name (no spaces), ID, and grade
        scanf("%s %d %f", students[i].name, &students[i].id, &students[i].grade);
    }

    // Print header for the student records table
    printf("\nID     Name        Grade\n");
    printf("----------------------------\n");

    // Print each stu` dent's information in a formatted table
    for (int i = 0; i < n; i++) {
        printf("%-6d %-12s %.1f\n", students[i].id, students[i].name, students[i].grade);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}
