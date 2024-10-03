/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <irobinso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 06:20:56 by irobinso          #+#    #+#             */
/*   Updated: 2024/10/03 06:56:16 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	//! str is the memory that im going to look through // n is the size of the memory // c is the character that im looking for
	//* str = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a , b, c, d, e, f, A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P};

	unsigned char *s;
	unsigned char uc;

	s = (unsigned char *)str;
	uc = (unsigned char)c;
	while (n > 0)
	{
		if (*s == uc)
		{
			return ((void *)s);
		}
		s++;
		n--;
	}
	return (NULL);
}
