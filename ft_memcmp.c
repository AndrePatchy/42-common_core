/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:58:27 by patchy            #+#    #+#             */
/*   Updated: 2023/09/28 15:12:06 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p1;
	char	*p2;
	size_t	i;

	p1 = (char *)s1;
	p2 = (char *)s2;
	i = 0;
	while (i < n && p1[i] != '\0' && p2[i] != '\0')
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
	i++;
	}
	return (0);
}
/*
int	main()
{
	char	s1[] = "Hewllo";
	char	s2[] = "Heyllo";

	printf("Result of ft_memcmp: %i\n\n", ft_memcmp(s1, s2, 3));
	printf("Result of memcmp: %i\n\n", memcmp(s1, s2, 3));
	return (0);
}
*/
