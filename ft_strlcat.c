/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:43:28 by sbrochar          #+#    #+#             */
/*   Updated: 2025/05/08 20:34:56 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srcsize;
	size_t	destsize;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	i = 0;
	if (size == 0 || destsize > size)
		return (srcsize + size);
	while ((src[i] != '\0') && (destsize + i < size - 1))
	{
		dest[destsize + i] = src[i];
		i++;
	}
	dest[destsize + i] = '\0';
	return (destsize + srcsize);
}
