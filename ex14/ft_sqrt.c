/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:39:05 by elopin            #+#    #+#             */
/*   Updated: 2024/11/06 14:38:58 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while ((i * i) != nb)
	{
		if (i == 46341)
			return (0);
		i++;
	}
	return (i);
}
/*int	main()

	int	o;

	o = ft_sqrt(21);
	printf("%d", o);
	return 0;
}
*/
