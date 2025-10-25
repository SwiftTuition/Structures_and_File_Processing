/*
 * Exercise 3: Bank Account Manager (Random-Access)
 *
 * Student Name: _______________________________
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    int accountNumber;
    char holderName[30];
    double balance;
} Account;

void initializeFile(const char *filename, int numAccounts);
void createAccount(const char *filename, int accountNum, const char *name, double balance);
void readAccount(const char *filename, int accountNum);
void updateBalance(const char *filename, int accountNum, double transaction);
void displayAllAccounts(const char *filename, int numAccounts);

int main(void) {
    const char *filename = "accounts.dat";
    int numAccounts = 100;

    printf("Initializing account file...\n");
    initializeFile(filename, numAccounts);

    printf("\nCreating accounts...\n");
    createAccount(filename, 1, "Thabo", 1500.00);
    createAccount(filename, 5, "Sarah", 2300.00);
    createAccount(filename, 10, "Aisha", 450.00);

    printf("\nReading account 5:\n");
    readAccount(filename, 5);

    printf("\nUpdating account 1 (deposit R500):\n");
    updateBalance(filename, 1, 500.00);
    readAccount(filename, 1);

    printf("\nAll active accounts:\n");
    displayAllAccounts(filename, numAccounts);

    return 0;
}

void initializeFile(const char *filename, int numAccounts) {
    // TODO: Open file in "wb" mode
    // TODO: Create blank Account structure
    // TODO: Write numAccounts blank records
    // TODO: Close file
}

void createAccount(const char *filename, int accountNum, const char *name, double balance) {
    // TODO: Open file in "rb+" mode
    // TODO: Create Account with given data
    // TODO: fseek to correct position: (accountNum - 1) * sizeof(Account)
    // TODO: fwrite the account
    // TODO: Close file
}

void readAccount(const char *filename, int accountNum) {
    // TODO: Open file in "rb" mode
    // TODO: fseek to account position
    // TODO: fread the account
    // TODO: Display if accountNumber != 0
    // TODO: Close file
}

void updateBalance(const char *filename, int accountNum, double transaction) {
    // TODO: Read current account
    // TODO: Update balance
    // TODO: Write back to same position
}

void displayAllAccounts(const char *filename, int numAccounts) {
    // TODO: Read all accounts
    // TODO: Display only those with accountNumber != 0
}
