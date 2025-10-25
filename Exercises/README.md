# Structures and File Processing - Practice Exercises

Good day, good people! These exercises will help you master structures and file processing in C.

## Overview

This folder contains 5 exercises that progressively build your skills:

1. **Product Inventory System** - Structures and arrays
2. **Student Database** - Sequential file I/O
3. **Bank Account Manager** - Random-access files
4. **Contact Book** - Search and update operations
5. **Library Management** - Complete system combining all concepts

## Getting Started

### Option 1: Download and Work Locally

1. You should have already downloaded `Exercises.zip`
2. Extract it to your preferred location
3. Open each exercise folder in Code::Blocks
4. Read the exercise README.md
5. Complete the TODOs in the starter code
6. Compile and test your solution

### Option 2: Use GitHub Codespaces (Optional)

If a GitHub repository is available, you can use Codespaces for a cloud-based development environment.

## Exercise Difficulty

- **Exercise 1-2:** Foundation level (arrays of structures, basic file I/O)
- **Exercise 3-4:** Intermediate level (random-access, search operations)
- **Exercise 5:** Advanced level (complete system integration)

## Compilation

For each exercise:

```bash
gcc exercise_X.c -o exercise_X -std=c11 -Wall
./exercise_X
```

## Tips for Success

1. **Read the README first** - Each exercise has specific requirements
2. **Start with the structure** - Define your `struct` before writing functions
3. **Test incrementally** - Don't write all functions before testing
4. **Check file operations** - Always verify `fopen()` succeeded
5. **Close your files** - Call `fclose()` when done
6. **Use meaningful names** - Clear variable and function names help debugging

## Getting Help

If you're stuck:

1. Review the theory and examples in the learning module
2. Check the lecture notes for similar problems
3. Review Practicals 9 and 10 for reference implementations
4. Break the problem down into smaller steps
5. Test each function individually

## Submission (If Required)

If these exercises are for assessment:

1. Complete all TODOs in the starter code
2. Test thoroughly with various inputs
3. Ensure no memory leaks (use `valgrind` if available)
4. Comment your code appropriately
5. Follow submission instructions from your instructor

Good luck, and remember - the best way to learn programming is by actually writing code!
