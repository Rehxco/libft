/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:27:56 by salome            #+#    #+#             */
/*   Updated: 2025/04/29 16:11:43 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c +32;
	}
	return (c);
}
/*int	main (void)
    {
            charstr[] = "YOOOOO";
    
            printf("%s", ft_strlowcase(str));
    return (0);
    }*/