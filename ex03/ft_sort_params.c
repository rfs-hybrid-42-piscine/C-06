/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:35:41 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 04:27:42 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn static int ft_strcmp(char *s1, char *s2)
 * @brief Safely compares two strings for ASCII sorting.
 * @details Iterates through both strings simultaneously. When a difference
 * is found or a string ends, it returns the mathematical difference of the
 * characters cast to unsigned char to prevent negative ASCII bugs.
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @return An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
static int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/**
 * @fn static void ft_print_params(int n_params, char **param)
 * @brief Prints the sorted argument vector array.
 * @details Iterates through the argument array starting from index 1 (skipping
 * the program name) and prints each string character by character, followed
 * by a newline.
 * @param n_params The total number of arguments (argc).
 * @param param The argument vector array (argv).
 */
static void	ft_print_params(int n_params, char **param)
{
	int	i;
	int	j;

	i = 1;
	while (i < n_params)
	{
		j = 0;
		while (param[i][j])
		{
			write(1, &param[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

/**
 * @fn static void ft_sort_params(int n_params, char **param)
 * @brief Implements a Bubble Sort algorithm to organize the argument pointers.
 * @details Compares adjacent strings using ft_strcmp and swaps their memory
 * pointers directly in the argument array if they are out of ASCII order.
 * @param n_params The total number of arguments (argc).
 * @param param The argument vector array (argv) to be sorted.
 */
static void	ft_sort_params(int n_params, char **param)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < n_params - 1)
	{
		j = i + 1;
		while (j < n_params)
		{
			if (ft_strcmp(param[i], param[j]) > 0)
			{
				tmp = param[i];
				param[i] = param[j];
				param[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/**
 * @fn int main(int argc, char **argv)
 * @brief Displays all arguments sorted in strict ASCII order.
 * @details Checks if any arguments were provided beyond the program name. 
 * If so, it triggers the sorting algorithm and then prints the result.
 * @param argc The argument count.
 * @param argv The argument vector array.
 * @return 0 on successful execution.
 */
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		ft_print_params(argc, argv);
	}
	return (0);
}
