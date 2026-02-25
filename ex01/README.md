# 🟢 Exercise 01: ft_print_params

## 📝 Objective
Write a program that displays its given arguments. Each argument should be printed on a new line, in the same order as in the command line.

## 💡 The Logic
The `argc` variable holds the total number of arguments passed to the program. 

We initialize a counter `i` at `1` to intentionally skip `argv[0]` (the program name). We loop as long as `i < argc`. Inside this loop, we use a secondary counter `j` to safely iterate through the characters of the current string (`argv[i][j]`), printing each character. When the inner loop finishes, we print a newline and increment `i` to move to the next argument string.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_print_params.c`](ft_print_params.c)**

2. **Testing:**
   Compile the program and pass random arguments to it to see them printed out!
   ```bash
   cc -Wall -Wextra -Werror ft_print_params.c -o ex01
   ./ex01 test1 test2 test3
   ```
