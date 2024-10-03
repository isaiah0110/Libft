/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <irobinso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:43:16 by irobinso          #+#    #+#             */
/*   Updated: 2024/10/01 13:43:16 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *p = (unsigned char *)s;
	size_t i = 0;

	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}

	return s;
}

/*int main(void)
{
	char str[20] = "Hello, World!";
	printf("Before ft_memset: %s\n", str);

	ft_memset(str + 3, 'X', 5);

	printf("After ft_memset: %s\n", str);
	return 0;
}*/
