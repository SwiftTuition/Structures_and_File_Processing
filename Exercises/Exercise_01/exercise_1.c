/*
 * Exercise 1: Product Inventory System
 *
 * Student Name: _______________________________
 * Student Number: _____________________________
 * Date: _______________________________________
 *
 * Description: Inventory management system using structures and arrays
 */

#include <stdio.h>
#include <string.h>

// Product structure definition
typedef struct {
    int productID;
    char name[30];
    double price;
    int quantity;
} Product;

// Function prototypes
void displayProduct(Product p);
void displayInventory(Product inventory[], int count);
int findProduct(Product inventory[], int count, int productID);
double calculateTotalValue(Product inventory[], int count);
void updateStock(Product inventory[], int count, int productID, int quantityChange);
void findLowStock(Product inventory[], int count, int threshold);

int main(void) {
    // Sample inventory
    Product inventory[5] = {
        {101, "Laptop", 12500.00, 15},
        {102, "Mouse", 250.00, 50},
        {103, "Keyboard", 450.00, 30},
        {104, "Monitor", 3500.00, 8},
        {105, "USB Cable", 75.00, 100}
    };
    int inventorySize = 5;

    printf("Product Inventory System\n");
    printf("========================\n\n");

    // Display full inventory
    displayInventory(inventory, inventorySize);

    // Calculate and display total value
    double totalValue = calculateTotalValue(inventory, inventorySize);
    printf("\nTotal Inventory Value: R%.2f\n", totalValue);

    // Test findProduct
    printf("\nSearching for product 103...\n");
    int index = findProduct(inventory, inventorySize, 103);
    if (index != -1) {
        printf("Found: ");
        displayProduct(inventory[index]);
    } else {
        printf("Product not found.\n");
    }

    // Test updateStock
    printf("\nUpdating stock for product 101 (selling 5 units)...\n");
    updateStock(inventory, inventorySize, 101, -5);
    displayProduct(inventory[0]);

    printf("\nUpdating stock for product 104 (restocking 12 units)...\n");
    updateStock(inventory, inventorySize, 104, 12);
    int monitorIndex = findProduct(inventory, inventorySize, 104);
    displayProduct(inventory[monitorIndex]);

    // Find low stock items
    printf("\nLow Stock Alert (threshold: 15):\n");
    findLowStock(inventory, inventorySize, 15);

    return 0;
}

/*
 * Display a single product's information
 *
 * Parameters:
 *   p - Product to display
 */
void displayProduct(Product p) {
    // TODO: Implement this function
    // Display: ID, Name, Price, Quantity, and Total Value (price * quantity)
    // Format: ID: 101, Name: Laptop, Price: R12500.00, Qty: 15, Value: R187500.00

}

/*
 * Display all products in inventory as a formatted table
 *
 * Parameters:
 *   inventory - Array of Product structures
 *   count - Number of products in the array
 */
void displayInventory(Product inventory[], int count) {
    // TODO: Implement this function
    // Print a header row
    // Loop through inventory and display each product
    // Use aligned columns for professional output

}

/*
 * Search for a product by ID
 *
 * Parameters:
 *   inventory - Array of Product structures
 *   count - Number of products in the array
 *   productID - ID to search for
 *
 * Returns:
 *   Index of the product if found, -1 if not found
 */
int findProduct(Product inventory[], int count, int productID) {
    // TODO: Implement this function
    // Loop through inventory
    // Compare each product's ID with productID
    // Return index if found, -1 if not found

    return -1;  // Placeholder
}

/*
 * Calculate total value of all inventory
 *
 * Parameters:
 *   inventory - Array of Product structures
 *   count - Number of products in the array
 *
 * Returns:
 *   Total value (sum of price * quantity for all products)
 */
double calculateTotalValue(Product inventory[], int count) {
    // TODO: Implement this function
    // Initialize sum to 0
    // Loop through inventory
    // Add (price * quantity) for each product
    // Return the sum

    return 0.0;  // Placeholder
}

/*
 * Update stock quantity for a product
 *
 * Parameters:
 *   inventory - Array of Product structures
 *   count - Number of products in the array
 *   productID - ID of product to update
 *   quantityChange - Amount to change (positive for restock, negative for sale)
 */
void updateStock(Product inventory[], int count, int productID, int quantityChange) {
    // TODO: Implement this function
    // Find the product using findProduct()
    // If found, update the quantity
    // Check that quantity doesn't go negative
    // Display appropriate message

}

/*
 * Find and display all products with stock below threshold
 *
 * Parameters:
 *   inventory - Array of Product structures
 *   count - Number of products in the array
 *   threshold - Minimum acceptable quantity
 */
void findLowStock(Product inventory[], int count, int threshold) {
    // TODO: Implement this function
    // Loop through inventory
    // Check if quantity < threshold
    // Display products that are low on stock
    // Format: "- Laptop (ID: 101): 15 units remaining"

}
