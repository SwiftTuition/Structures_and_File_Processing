# Exercise 4: Contact Book System

## Objective

Build a contact management system combining structures, arrays, and file I/O.

## Features

1. Add new contacts
2. Display all contacts
3. Search by name
4. Update phone number
5. Delete contact
6. Save/Load from file

## Contact Structure
```c
typedef struct {
    int id;
    char name[30];
    char email[40];
    char phone[15];
} Contact;
```

## Functions to Implement

1. `int addContact(Contact contacts[], int count, int id, const char *name, const char *email, const char *phone)`
2. `void displayContacts(Contact contacts[], int count)`
3. `int searchByName(Contact contacts[], int count, const char *name)`
4. `void updatePhone(Contact contacts[], int count, int id, const char *newPhone)`
5. `int deleteContact(Contact contacts[], int *count, int id)`
6. `void saveContacts(Contact contacts[], int count, const char *filename)`
7. `int loadContacts(Contact contacts[], int maxCount, const char *filename)`
