/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:04:28 by patchy            #+#    #+#             */
/*   Updated: 2023/09/29 09:32:53 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Opens a void pointer, dynamicly allocates memory. If overflow or error (?)
// return NULL. If all good, fills the array with 0s and return the filled 
// pointer. 

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
