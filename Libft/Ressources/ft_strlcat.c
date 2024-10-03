/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <irobinso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 02:14:51 by irobinso          #+#    #+#             */
/*   Updated: 2024/10/03 03:24:05 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size - 1)
	{
		i++;
	}
	while (src[j] != '\0' && i + j < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (size + j);
}

/*int main(void)
{
	char dest[100] = "Hello";
	char src[100] = "World!";
	size_t size = 10;

	strlcat(dest, src, size);
	printf("%s\n", dest);

	return (0);
}*/
