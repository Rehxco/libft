/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:47:13 by sbrochar          #+#    #+#             */
/*   Updated: 2025/04/29 15:35:54 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int c = 'j';
	//printf("%d\n", isalnum(c));
	printf("%d\n", ft_isalnum(c));
}*/