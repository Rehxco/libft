/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:13:32 by sbrochar          #+#    #+#             */
/*   Updated: 2025/05/23 11:01:13 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_edge_case(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = ft_intlen(n);
	if (n == INT_MIN || n == 0)
		return (ft_edge_case(n));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	i = len - 1;
	while (n >= 1)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		--i;
	}
	str[len] = '\0';
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-4));
// 	return (0);
// }
