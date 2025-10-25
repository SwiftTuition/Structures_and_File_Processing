# Exercise 1: Product Inventory System

## Objective

Build a product inventory management system using structures and arrays. This exercise focuses on:
- Defining and using structures
- Arrays of structures
- Structure member access
- Basic inventory operations

## Problem Description

You are building an inventory system for a small shop. Each product has:
- Product ID (integer)
- Product name (string, max 30 characters)
- Price (double)
- Quantity in stock (integer)

## Requirements

Implement the following functions:

### 1. `void displayProduct(Product p)`
Display a single product's information in a formatted manner.

### 2. `void displayInventory(Product inventory[], int count)`
Display all products in the inventory as a table.

### 3. `int findProduct(Product inventory[], int count, int productID)`
Search for a product by ID. Return the index if found, -1 if not found.

### 4. `double calculateTotalValue(Product inventory[], int count)`
Calculate the total value of all inventory (sum of price * quantity for each product).

### 5. `void updateStock(Product inventory[], int count, int productID, int quantityChange)`
Update the stock level for a product. The quantity change can be positive (restock) or negative (sale).

### 6. `void findLowStock(Product inventory[], int count, int threshold)`
Display all products with quantity below the threshold.

## Expected Output Format

```
Product Inventory System
========================

Current Inventory:
ID    Name                    Price      Qty    Value
--------------------------------------------------------
101   Laptop                  R12500.00  15     R187500.00
102   Mouse                   R250.00    50     R12500.00
103   Keyboard                R450.00    30     R13500.00

Total Inventory Value: R213500.00

Low Stock Alert (threshold: 20):
- Laptop (ID: 101): 15 units remaining
```

## Test Cases

Your program should handle:
1. Displaying the full inventory
2. Finding a product by ID (both existing and non-existing)
3. Updating stock (both additions and subtractions)
4. Calculating total inventory value
5. Identifying low-stock items

## Starter Code

Use the provided `exercise_1.c` file which contains:
- The Product structure definition
- Function prototypes
- A main function with sample data
- TODO comments indicating where you need to add code

## Compilation and Execution

```bash
gcc exercise_1.c -o exercise_1 -std=c11 -Wall
./exercise_1
```

## Tips

- Use `printf` with format specifiers for aligned output: `%-10d %-20s %10.2f %8d`
- Remember to check array bounds when searching
- The dot operator (`.`) accesses structure members
- Test edge cases: empty inventory, product not found, stock going negative

## Extension Challenge (Optional)

Add these features for extra practice:
1. Sort products by price (highest to lowest)
2. Find the most expensive product
3. Calculate average price across all products
4. Implement a "reorder" function that suggests which products to reorder
