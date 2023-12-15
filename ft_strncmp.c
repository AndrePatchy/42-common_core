/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:24:56 by patchy            #+#    #+#             */
/*   Updated: 2023/09/23 17:02:25 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;

	p1 = (char *)s1;
	p2 = (char *)s2;
	i = 0;
	while (p1[i] != '\0' && p2[i] != '\0' && p1[i] == p2[i] && i < n)
	{
		i++;
	}
	if (p1[i] != p2[i])
	{
		return (p1[i] - p2[i]);
	}
	else
		return (0);
}
/*
int	main()
{
	char	s1[] = "AAZ";
	char	s2[] = "AAA";
	size_t	n = 3;

	printf("%i\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/
