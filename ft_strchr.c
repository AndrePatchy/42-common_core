/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:14:26 by patchy            #+#    #+#             */
/*   Updated: 2023/09/23 16:13:43 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (p[i] != '\0')
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i++;
	}
	if (c == 0)
		return (&p[i]);
	return (0);
}
/*
int	main()
{
	char	str[] = "123";
	char	ft_str[] = "567";

	printf("ft_strchr:\n");
	printf("%p\n\n", ft_strchr(ft_str, '6'));
	printf("strchr:\n");
	printf("%p\n", strchr(str, '1'));
	return (0);
}
*/
