/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:32:05 by sbrochar          #+#    #+#             */
/*   Updated: 2025/05/08 20:32:28 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	int		size;

	size = ft_strlen(str);
	i = size;
	if ((unsigned char)c == '\0')
		return ((char *)str + i);
	while (i-- > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)(str + i));
	}
	return (NULL);
}
