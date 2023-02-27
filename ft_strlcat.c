/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:50:04 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/22 13:54:25 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{	
	size_t	i;
	size_t	lendest;

	i = 0;
	lendest = ft_strlen(dest);
	if (!(destsize == 0 || lendest > destsize))
	{
		while (destzize - lendest - 1 > i)
		{
			dest[lendest + i] = src[i];
			i++;
		}
		dest[lendest + i] = '\0';
	}
	return (lendest + ft_strlen(src));
}
