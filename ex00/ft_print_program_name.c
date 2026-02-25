/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:29:02 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 04:21:04 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn int main(int argc, char **argv)
 * @brief Displays the name of the program.
 * @details Safely accesses the first string in the argument vector (index 0)
 * using an integer index to avoid mutating the original memory pointer.
 * @param argc The argument count.
 * @param argv The argument vector array.
 * @return 0 on successful execution.
 */
int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
