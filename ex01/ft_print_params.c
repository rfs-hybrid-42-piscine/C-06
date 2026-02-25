/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:07:54 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 04:21:39 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn int main(int argc, char **argv)
 * @brief Displays the command-line arguments.
 * @details Skips the program name at index 0 and prints each subsequent 
 * argument on a new line using safe index iteration.
 * @param argc The argument count.
 * @param argv The argument vector array.
 * @return 0 on successful execution.
 */
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
