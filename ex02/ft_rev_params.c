/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dludtke- <dludtke-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:03:52 by dludtke-          #+#    #+#             */
/*   Updated: 2021/04/13 20:11:26 by dludtke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int args;

	i = 0;
	args = argc - 1;
	while (args > 0)
	{
		while (argv[args][i] != '\0')
		{
			write(1, &argv[args][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		args--;
	}
	return (0);
}
