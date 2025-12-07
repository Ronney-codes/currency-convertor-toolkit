Currency Converter Toolkit (C Programming)
1. Title & Objective
Technology Choice:

C Programming Language

Justification:

C is beginner-friendly yet powerful.

It teaches core programming concepts such as variables, conditionals, functions, and input/output.

Perfect for building simple CLI (Command Line Interface) applications.

Helps you understand how real programs handle calculations and user input.

End Goal (Minimal Working Example):

A simple currency converter that:

accepts an amount from the user

allows selecting conversion options

converts between a few predefined currencies

displays the final converted value

2. Quick Summary of the Technology
Definition:

C is a general-purpose, procedural programming language used for system programming, embedded systems, performance-critical applications, and foundational software such as operating systems.

Use Cases (Industry):

Building operating systems (Linux, Windows components)

Embedded systems (microcontrollers, IoT devices)

High-performance applications (databases, game engines)

Compilers and interpreters

Systems-level utilities

Real-World Example:

MySQL Database Engine — one of the world’s most popular databases — is written primarily in C and C++, showing how reliable and performance-focused C is.

3. System Requirements
Operating System:

Windows 10/11

macOS

Linux (Ubuntu/Fedora/Arch)

Minimum Hardware:

2GB RAM

1GHz Processor

200MB free storage

Required Tools:

C Compiler

Windows: MinGW or TDM-GCC

Mac: clang (built-in after installing Xcode tools)

Linux: gcc

Code Editor:

Visual Studio Code

CodeBlocks

Dev-C++

CLion (optional)

Dependencies:

None (standard C libraries only).

4. Installation & Setup Instructions
Windows (Using MinGW + VS Code)
Step 1: Install MinGW

Download MinGW from: https://sourceforge.net/projects/mingw

Install and choose:

gcc

g++

mingw32-make

Add MinGW to PATH:

C:\MinGW\bin

Step 2: Verify Installation

Open PowerShell:

gcc --version


You should see a version number printed.

Step 3: Create Project Structure

In your project folder:

mkdir src
mkdir docs

Step 4: Open Project in VS Code
code .

5. Minimal Working Example (MWE)
📌 Code Block (src/main.c)
#include <stdio.h>

int main() {
    int choice;
    float amount, result;

    printf("===== SIMPLE CURRENCY CONVERTER =====\n");
    printf("1. USD to KES\n");
    printf("2. KES to USD\n");
    printf("3. EUR to USD\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 4) {
        printf("Goodbye!\n");
        return 0;
    }

    printf("Enter amount: ");
    scanf("%f", &amount);

    switch(choice) {
        case 1:
            result = amount * 160.50; // Example rate
            printf("USD %.2f = KES %.2f\n", amount, result);
            break;
        case 2:
            result = amount / 160.50;
            printf("KES %.2f = USD %.2f\n", amount, result);
            break;
        case 3:
            result = amount * 1.08; // Example rate
            printf("EUR %.2f = USD %.2f\n", amount, result);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

📌 Expected Output
===== SIMPLE CURRENCY CONVERTER =====
1. USD to KES
2. KES to USD
3. EUR to USD
4. Exit
Enter your choice: 1
Enter amount: 10
USD 10.00 = KES 1605.00

📌 Brief Explanation

The program prints a menu of conversion choices.

The user enters a choice and an amount.

A switch-case performs the correct calculation using predefined exchange rates.

The result is printed to the console.

Input is taken using scanf() and displayed with printf().

6. AI prompt journal
For the broader prompts, i have placed them in the prompt.md file .


7. Common Issues & Fixes
❌ Error: 'gcc' is not recognized as an internal or external command

Cause: MinGW not added to PATH.
Fix:
Add this to PATH in Windows environment variables:

C:\MinGW\bin

❌ Error: Compilation fails with “No such file or directory”

Cause: You're not in the folder where main.c exists.
Fix:
Navigate into src/ folder:

cd src


Compile:

gcc main.c -o main

❌ Output window closes immediately on Windows

Fix: run using PowerShell or Command Prompt:

./main

8. References
Official Documentation

C Language Reference: https://devdocs.io/c/

GCC Compiler Docs: https://gcc.gnu.org/onlinedocs/

Helpful Tutorials

Learn C (Programiz): https://www.programiz.com/c-programming

W3Schools C Basics: https://www.w3schools.com/c/c_intro.php

Video Guides

Harvard CS50 C Basics (YouTube)

CodeWithHarry C Playlist

FreeCodeCamp C Programming Crash Course