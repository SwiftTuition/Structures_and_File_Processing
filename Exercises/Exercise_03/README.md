# Exercise 3: Bank Account Manager (Random-Access Files)

## Objective

Implement a random-access file system for bank accounts using `fseek()`, `fread()`, and `fwrite()`.

## Requirements

Functions to implement:
1. `void initializeFile(const char *filename, int numAccounts)` - Create file with blank records
2. `void createAccount(const char *filename, int accountNum, const char *name, double balance)`
3. `void readAccount(const char *filename, int accountNum)`
4. `void updateBalance(const char *filename, int accountNum, double transaction)`
5. `void displayAllAccounts(const char *filename, int numAccounts)`

## Account Structure
```c
typedef struct {
    int accountNumber;
    char holderName[30];
    double balance;
} Account;
```

## Key Concepts
- Binary file I/O
- Random access with `fseek()`
- Fixed-length records
