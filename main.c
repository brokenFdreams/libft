/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsinged <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:16:35 by fsinged           #+#    #+#             */
/*   Updated: 2019/06/26 16:41:42 by fsinged          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		a;
	char	*src;
	char	*dst;

	a = 133;
	printf("%s\n", ft_itoa_base(a, 10));
	printf("%s\n", ft_itoa_base(a, 16));
	printf("%s\n", ft_itoa_base(a, 13));
	src = ft_strnew(13);
	ft_strcpy(src, "lol");
	dst = ft_strnew(17);
	ft_strcpy(dst, "lel");
	printf("%s\n", ft_strpcat(dst, src, 3, 4));
	dst[3] = '1';
	printf("%s\n", dst);
	dst[16] = 'e';
	printf("%s\n", dst);
	ft_strcpy(src, "123456789");
	printf("%s\n", ft_strpcat(dst, src, 9, 7));
	return (0);
}
