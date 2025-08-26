/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:36:33 by sbrochar          #+#    #+#             */
/*   Updated: 2025/05/14 15:15:50 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		i;

	i = 0;
	if (str == NULL)
		return (NULL);
	newstr = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!newstr)
		return (NULL);
	while (str[i])
	{
		newstr[i] = f(i, str[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
