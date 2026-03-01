*This project has been created as part of the 42 curriculum by maaugust.*

<div align="center">
  <img src="https://raw.githubusercontent.com/rfs-hybrid/42-piscine-artwork/main/assets/covers/cover-c06.png" alt="C 06 Cover" width="100%" />
</div>

<div align="center">
  <h1>💻 C 06: Command-Line Arguments</h1>
  <p><i>Building standalone programs and mastering argc and argv.</i></p>
  
  <img src="https://img.shields.io/badge/Language-C-blue" alt="Language badge" />
  <img src="https://img.shields.io/badge/Grade-100%2F100-success" alt="Grade badge" />
  <img src="https://img.shields.io/badge/Norminette-Passing-success" alt="Norminette badge" />
</div>

---

## 💡 Description
**C 06** represents a significant shift in the C Piscine. Up to this point, you have been writing utility functions tested by an external source. Now, you will be building complete, standalone C programs from scratch.

This module introduces the concept of **Command-Line Arguments**. You will learn how the `main` function receives input directly from the terminal via the argument count (`argc`) and the argument vector array (`argv`), allowing users to pass dynamic data to your programs at runtime.

---

## 🧠 Exercise Breakdown & Logic

*The following section explains the core concepts required to solve each exercise. It focuses on the fundamental logic of C programming, emphasizing parameter parsing and terminal output.*

### 🔹 Parsing Arguments
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex00: ft_print_program_name`](ex00)** | **The Zero Index:** Writing a program that displays its own executable name. <br><br>**Logic:** When a C program runs, the very first string passed to the `argv` array (`argv[0]`) is always the path or name of the executable itself. *Safe Iteration:* Instead of mutating the original pointer, we iterate through the `argv[0]` string using a secondary integer index (`argv[0][i]`) and write its characters to the terminal, followed by a newline `\n`. |
| **[`ex01: ft_print_params`](ex01)** | **Iterating Vectors:** Displaying all given arguments in the order they were passed. <br><br>**Logic:** The `argc` variable tells us exactly how many arguments exist. We create a `while` loop starting at index `1` (to explicitly skip the program name at `argv[0]`) and run it until `i < argc`. For each iteration, we use a safe secondary index (`argv[i][j]`) to print the characters of the string located at `argv[i]`, followed by a newline. |
| **[`ex02: ft_rev_params`](ex02)** | **Reverse Iteration:** Displaying all given arguments in reverse order. <br><br>**Logic:** This relies on the same safe iteration logic as `ex01`, but instead of incrementing, we set our counter to start at the very last argument (`argc - 1`). We loop backwards, decrementing `i` until it hits `1`, printing each string and a newline. We must still ignore `argv[0]`. |

### 🔢 Sorting & Algorithms
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex03: ft_sort_params`](ex03)** | **ASCII Sorting:** Displaying all arguments sorted in strict ASCII order. <br><br>**Logic:** We need to sort an array of strings. We can implement a classic Bubble Sort algorithm. We iterate through the `argv` array (starting from index `1`). We use a custom `ft_strcmp` helper function to mathematically compare adjacent strings. If a string is "greater" than the one next to it, we swap their pointer positions in the `argv` array. Once the array is fully sorted, we loop through it one last time to safely print the results. |

---

## 🛠️ Instructions

### 🧪 Compilation & Testing
Unlike previous modules where you wrote isolated functions, every exercise in C 06 is a complete program requiring its own `int main(int argc, char **argv)` function.

Because each file has its own `main`, **you cannot compile them together or use a master tester file.** You must compile and execute each program individually.

1. **Clone the repository:**
   You can clone this module directly, or pull the entire 42 Piscine parent repository which includes this module as a submodule.

   **Option A: Clone this module directly**
   ```bash
   git clone git@github.com:rfs-hybrid-42-piscine/C-06.git C-06
   cd C-06
   ```

   **Option B: Clone the parent repository (with submodules)**
   ```bash
   git clone --recurse-submodules git@github.com:rfs-hybrid/42-Piscine.git 42-Piscine
   cd 42-Piscine/C-06
   ```
   *(Note: The `--recurse-submodules` flag ensures all nested module repositories are populated immediately.)*

2. **Test Exercise 00 (Program Name):**
   ```bash
   cc -Wall -Wextra -Werror ex00/ft_print_program_name.c -o ex00
   ./ex00
   ```

3. **Test Exercise 01 (Print Params):**
   ```bash
   cc -Wall -Wextra -Werror ex01/ft_print_params.c -o ex01
   ./ex01 test1 test2 test3
   ```

4. **Test Exercise 02 (Reverse Params):**
   ```bash
   cc -Wall -Wextra -Werror ex02/ft_rev_params.c -o ex02
   ./ex02 test1 test2 test3
   ```

5. **Test Exercise 03 (Sort Params):**
   ```bash
   cc -Wall -Wextra -Werror ex03/ft_sort_params.c -o ex03
   ./ex03 zebra apple charlie
   ```

### 🚨 The Norm
Moulinette relies on a program called `norminette` to check if your files comply with the Norm. Every single `.c` and `.h` file must pass.

**The 42 Header:**
Before writing any code, every file must start with the standard 42 header. `norminette` will automatically fail any file missing this specific signature.
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:29:02 by maaugust          #+#    #+#             */
/*   Updated: 2025/03/04 18:06:49 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

Run the following command before pushing:
```bash
norminette -R CheckForbiddenSourceHeader <file.c>
```

---

## 📚 Resources & References

* `man 3 write` - Manual for standard output writing.
* [Command Line Arguments in C](https://www.tutorialspoint.com/cprogramming/c_command_line_arguments.htm) - A breakdown of `argc` and `argv`.
* [Bubble Sort Algorithm](https://www.geeksforgeeks.org/bubble-sort/) - The logic needed to complete Exercise 03.
* [42 Norm V4](https://cdn.intra.42.fr/pdf/pdf/96987/en.norm.pdf) - The strict coding standard for 42 C projects.
* [Official 42 Norminette Repository](https://github.com/42School/norminette) - The open-source linter enforcing the strict 42 coding standard.

### 🤖 AI Usage Guidelines
* **Code:** No AI-generated code was used to solve these exercises. All C functions were built manually to strictly comply with the 42 Norm and deeply understand manual memory manipulation, enforcing the concept that learning is about developing the ability to find an answer, not just getting one directly.
* **Documentation:** AI tools were utilized to structure this `README.md` and format the logic breakdowns to create a clean, accessible educational resource for fellow 42 students.
