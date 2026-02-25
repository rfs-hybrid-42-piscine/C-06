# 🟢 Exercise 03: ft_sort_params

## 📝 Objective
Write a program that displays its given arguments sorted in ASCII order. Each argument should be printed on a new line.

## 💡 The Logic
To sort the strings, we use a classic **Bubble Sort** algorithm alongside a custom string comparison helper function (`ft_strcmp`).

1. **Safe Comparison:** Our `ft_strcmp` function compares characters. Crucially, it casts the return value to `unsigned char` to perfectly mimic the standard C library behavior and prevent negative integer overflow bugs with extended ASCII characters.
2. **Sorting the Array:** We iterate through the `argv` array starting from index 1. We compare the current string (`param[i]`) with the adjacent string (`param[j]`). If `ft_strcmp` returns a value greater than 0, it means the strings are out of ASCII order. We temporarily store one pointer and swap them directly within the `argv` array.
3. **Printing:** Once the array is fully sorted, a secondary helper function loops through and safely prints the reordered arguments.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_sort_params.c`](ft_sort_params.c)**

2. **Testing:**
   Compile the program and pass arguments out of alphabetical order.
   ```bash
   cc -Wall -Wextra -Werror ft_sort_params.c -o ex03
   ./ex03 zebra apple charlie
   ```
