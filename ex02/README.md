# 🟢 Exercise 02: ft_rev_params

## 📝 Objective
Write a program that displays its given arguments. Each argument should be printed on a new line, in the reverse order from the command line.

## 💡 The Logic
This uses the same safe double-iteration logic as `ex01`, but the primary loop runs backward. 

Because arrays are zero-indexed, the last argument is located at `argc - 1`. We initialize `i = argc - 1` and loop while `i > 0` (which ensures we still skip the program name at index 0). Inside the loop, we print the string character by character, print a newline, and decrement `i` to move backward through the argument vector.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_rev_params.c`](ft_rev_params.c)**

2. **Testing:**
   Compile the program and pass multiple arguments to verify they print in reverse order.
   ```bash
   cc -Wall -Wextra -Werror ft_rev_params.c -o ex02
   ./ex02 test1 test2 test3
   ```
