/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dludtke- <dludtke-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:54:58 by dludtke-          #+#    #+#             */
/*   Updated: 2021/04/13 20:02:02 by dludtke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int args;

	i = 0;
	args = 1;
	while (args < argc)
	{
		while (argv[args][i] != '\0')
		{
			write(1, &argv[args][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		args++;
	}
	return (0);
}
