/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:33:58 by sbrochar          #+#    #+#             */
/*   Updated: 2025/05/26 15:59:18 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((s1[i] != s2[i]) || (s1[i] == '\0') || (s2[i] == '\0'))
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main (void)
{
		char    *s1 = "babc";
		char    *s2 = "abc";
		printf("%d\n", strncmp(s1, s2, 8));
		printf("%d\n", ft_strncmp(s1, s2, 8));

}*/