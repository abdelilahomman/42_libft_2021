/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:35:13 by aomman            #+#    #+#             */
/*   Updated: 2021/11/15 20:01:21 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	main(void)
{
	size_t a[5] = {1, 2, 3, 4, 5};
	size_t b;
	b = 255;
	ft_memset(a, b, 5);
	int i = 0;
	while (i < 5)
		printf("%zu\n", a[i++]);

}
