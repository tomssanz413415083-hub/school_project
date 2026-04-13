#include <stdio.h>
#include <string.h>
#include "student.h"

Student students[100];
int studentCount = 0;

void addStudent(Student students[], int *count) {
    printf("Enter student name: ");
    scanf(" %[^\n]", students[*count].name);

    printf("Enter student ID: ");
    scanf("%s", students[*count].id);

    printf("Enter student score: ");
    scanf("%f", &students[*count].score);

    (*count)++;
    printf("Student added successfully.\n");
}
