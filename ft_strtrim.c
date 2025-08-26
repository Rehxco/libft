/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:50:10 by sbrochar          #+#    #+#             */
/*   Updated: 2025/05/14 15:46:47 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str1, char const *set)
{
	char	*newstr;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = ft_strlen(str1);
	while (str1[start] && (ft_inset(str1[start], set)))
		start++;
	while (end > start && (ft_inset(str1[end - 1], set)))
		end--;
	newstr = malloc(sizeof(char) * (end - start + 1));
	if (!newstr)
		return (NULL);
	while (start < end)
		newstr[i++] = str1[start++];
	newstr[i] = '\0';
	return (newstr);
}
