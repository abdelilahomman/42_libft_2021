/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:13:42 by aomman            #+#    #+#             */
/*   Updated: 2021/11/11 18:46:31 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*_dest;
	char	*_src;
	size_t	i;

	_dest = (char *) dest;
	_src = (char *) src;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		_dest[i] = _src[i];
		i++;
	}
	return (dest);
}
