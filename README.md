# C++ Loop & Pattern Printing Exercises 🚀

A collection of simple C++ programs demonstrating fundamental concepts like `for` loops, nested loops, conditional logic, and basic I/O operations. This repository is perfect for beginners getting comfortable with the basics of C++.

---

## 📋 About The Project

This repository contains several small, self-contained C++ files, each designed to illustrate a specific programming concept. The exercises were created as part of a learning module (Experiment 6) and cover:

* Simple iteration with `for` loops.
* Conditional logic with `if` statements.
* Basic string input and manipulation.
* Using nested loops to create text-based patterns like triangles and diamonds.

---

## 📂 Code Overview

Here is a summary of what each file does:

| File Name | Description | Key Concepts |
| :--- | :--- | :--- |
| **`exp6.cc`** | Prints the string "SIT" six times. | Simple `for` loop |
| **`exp6b.cc`** | Prints all even numbers from 0 to 10. | `for` loop, `if`, modulo `%` |
| **`exp6c.cc`** | A basic password validator that checks for forbidden characters. | `string`, `for` loop, `if` |
| **`exp6d.cc`** | Reverses a given 11-character string (e.g., a PRN). | `string`, `for` loop (reverse) |
| **`exp6e.cc`** | Demonstrates the execution flow of nested `for` loops. | Nested `for` loops |
| **`exp6f.cc`** | Prints a right-angled triangle pattern using asterisks (`*`). | Nested `for` loops |
| **`exp6g.cc`** | Prints a right-angled triangle with incrementing numbers. | Nested `for` loops, counter variable |
| **`exp6h.cc`** | Prints a diamond pattern using asterisks (`*`). | Multiple `for` loops |
| **`exp6i.cc`** | Prints an inverted (upside-down) triangle pattern using asterisks. | Nested `for` loops |

---

## ⚙️ Getting Started

To get a local copy up and running, follow these simple steps.

### Prerequisites

You need a C++ compiler installed on your system. The most common one is **g++**.

* **To check if you have g++:**
    Open your terminal or command prompt and type:
    ```sh
    g++ --version
    ```

### Installation

1.  Clone the repository to your local machine:
    ```sh
    git clone [https://github.com/your-username/your-repo-name.git](https://github.com/your-username/your-repo-name.git)
    ```
2.  Navigate into the cloned directory:
    ```sh
    cd your-repo-name
    ```

---

## ▶️ How to Compile and Run

You can compile and run any of the `.cc` files from your terminal.

1.  **Compile the C++ file.** This creates an executable file. For example, to compile `exp6f.cc`:
    ```sh
    g++ exp6f.cc -o triangle_pattern
    ```
    * `g++`: The command to call the compiler.
    * `exp6f.cc`: The source file you want to compile.
    * `-o triangle_pattern`: This flag sets the name of the output executable file.

2.  **Run the executable file:**
    ```sh
    ./triangle_pattern
    ```

    **Expected Output:**
    ```
    *
    **
    ***
    ****
    *****
    ```

You can follow the same two steps for any other file in this repository!
