# 🟢 Exercise 00: ft_print_program_name

## 📝 Objective
Write a program that displays its own name, followed by a new line.

## 💡 The Logic
When a C program executes, the very first argument passed to the program (stored at `argv[0]`) is always the path or name of the executable itself. 

To print it, we use a `while` loop to iterate through the characters of the `argv[0]` string. 
*Safe Iteration:* Instead of modifying the pointer directly (like `argv[0]++`), we use a secondary integer variable `i` to access each character (`argv[0][i]`). This safely preserves the original memory address of the argument vector! After the string is printed using the `write` function, we append a newline (`\n`).

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_print_program_name.c`](ft_print_program_name.c)**

2. **Testing:**
   Unlike previous modules, this is a standalone program with its own `main` function. You must compile it directly!
   ```bash
   cc -Wall -Wextra -Werror ft_print_program_name.c -o ex00
   ./ex00
   ```
