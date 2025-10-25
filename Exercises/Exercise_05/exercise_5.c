/*
 * Exercise 5: Library Management System
 *
 * Student Name: _______________________________
 * Student Number: _____________________________
 *
 * This is a comprehensive exercise combining all concepts.
 * Take your time and implement one feature at a time.
 */

#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 200
#define MAX_MEMBERS 100
#define MAX_BORROWED 5

typedef struct {
    int isbn;
    char title[50];
    char author[40];
    int year;
    int available;  // 1 = available, 0 = borrowed
} Book;

typedef struct {
    int memberID;
    char name[30];
    int borrowedBooks[MAX_BORROWED];  // Array of ISBNs
    int borrowCount;
} Member;

// TODO: Declare all function prototypes for:
// - Book management
// - Member management
// - Borrowing/returning
// - File I/O
// - Search operations

int main(void) {
    Book books[MAX_BOOKS];
    Member members[MAX_MEMBERS];
    int bookCount = 0;
    int memberCount = 0;

    // TODO: Implement comprehensive menu system
    // Main menu:
    // 1. Book Management
    //    - Add book
    //    - Display books
    //    - Search books
    // 2. Member Management
    //    - Register member
    //    - Display members
    // 3. Transactions
    //    - Borrow book
    //    - Return book
    //    - Display member's books
    // 4. File Operations
    //    - Save all data
    //    - Load all data
    // 0. Exit

    return 0;
}

// TODO: Implement all functions
// Start with basic operations, then add file I/O
// Test each function thoroughly before moving to the next
