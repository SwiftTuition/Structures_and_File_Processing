/*
 * Exercise 2: Student Database with Sequential Files
 *
 * Student Name: _______________________________
 * Student Number: _____________________________
 */

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int studentID;
    char name[30];
    double grade;
} Student;

// Function prototypes
void saveToFile(Student students[], int count, const char *filename);
int loadFromFile(Student students[], int maxCount, const char *filename);
void displayStudents(Student students[], int count);
void searchByID(Student students[], int count, int studentID);
double calculateAverage(Student students[], int count);

int main(void) {
    Student students[MAX_STUDENTS];
    int count = 0;

    // Create sample data
    students[0] = (Student){24123001, "Thabo", 85.5};
    students[1] = (Student){24123002, "Sarah", 92.0};
    students[2] = (Student){24123003, "Aisha", 88.5};
    students[3] = (Student){24123004, "Liam", 76.0};
    count = 4;

    printf("Original Student List:\n");
    displayStudents(students, count);

    // Save to file
    printf("\nSaving to file...\n");
    saveToFile(students, count, "students.txt");

    // Clear array
    count = 0;

    // Load from file
    printf("Loading from file...\n");
    count = loadFromFile(students, MAX_STUDENTS, "students.txt");

    printf("\nLoaded Student List:\n");
    displayStudents(students, count);

    // Search for a student
    printf("\nSearching for student 24123002:\n");
    searchByID(students, count, 24123002);

    // Calculate average
    double avg = calculateAverage(students, count);
    printf("\nClass Average: %.2f%%\n", avg);

    return 0;
}

void saveToFile(Student students[], int count, const char *filename) {
    // TODO: Open file for writing
    // TODO: Check if file opened successfully
    // TODO: Use fprintf to write each student
    // TODO: Close the file
    // TODO: Print success message
}

int loadFromFile(Student students[], int maxCount, const char *filename) {
    // TODO: Open file for reading
    // TODO: Check if file opened successfully
    // TODO: Use fscanf to read students in a loop
    // TODO: Close the file
    // TODO: Return the number of students loaded
    return 0;
}

void displayStudents(Student students[], int count) {
    // TODO: Print header
    // TODO: Loop through and print each student
}

void searchByID(Student students[], int count, int studentID) {
    // TODO: Search for student with matching ID
    // TODO: Display if found, or "not found" message
}

double calculateAverage(Student students[], int count) {
    // TODO: Sum all grades and return average
    return 0.0;
}
