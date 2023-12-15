/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:03:56 by patchy            #+#    #+#             */
/*   Updated: 2023/09/28 16:15:04 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	r;
	int	sig;
	char	*s;

	s = (char *)nptr;
	sig = 1;
	i = 0;
	r = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sig = sig * -1;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		r = (r * 10) + s[i] - 48;
		i++;
	}
	return (r * sig);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	printf("%i\n", ft_atoi(argv[1]));
	return (0);
}
*/
