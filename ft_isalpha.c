/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:46:45 by sbrochar          #+#    #+#             */
/*   Updated: 2025/04/29 15:35:56 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	int alpha = 'j';
	//printf("%d\n", isalpha(alpha));
	printf("%d\n", ft_isalpha(alpha));
}*/