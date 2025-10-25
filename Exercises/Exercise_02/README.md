# Exercise 2: Student Database with Sequential File I/O

## Objective

Build a student database system that saves and loads data from text files. Focus on:
- Sequential file I/O with `fprintf()` and `fscanf()`
- Structures with file operations
- Data persistence

## Problem Description

Create a student record system that:
- Stores student information (ID, name, grade)
- Saves records to a text file
- Loads records from a text file
- Displays and searches records

## Requirements

Implement these functions:

1. `void saveToFile(Student students[], int count, const char *filename)` - Save all students to a text file
2. `int loadFromFile(Student students[], int maxCount, const char *filename)` - Load students from file, return count loaded
3. `void displayStudents(Student students[], int count)` - Display all students
4. `void searchByID(Student students[], int count, int studentID)` - Find and display a student
5. `double calculateAverage(Student students[], int count)` - Calculate class average

## File Format

```
24123001 Thabo 85.5
24123002 Sarah 92.0
24123003 Aisha 88.5
```

## Test Your Code

Your program should:
1. Create sample students in memory
2. Save them to "students.txt"
3. Clear the array
4. Load from "students.txt"
5. Display loaded students
6. Search for specific students
7. Calculate class average
