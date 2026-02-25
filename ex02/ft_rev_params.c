/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:32:53 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/25 04:21:58 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn int main(int argc, char **argv)
 * @brief Displays the command-line arguments in reverse order.
 * @details Starts from the last argument (argc - 1) and iterates backwards 
 * until reaching index 1, printing each argument on a new line.
 * @param argc The argument count.
 * @param argv The argument vector array.
 * @return 0 on successful execution.
 */
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
