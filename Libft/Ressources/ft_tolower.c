/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <irobinso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 03:23:17 by irobinso          #+#    #+#             */
/*   Updated: 2024/10/03 03:56:13 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int tolower(int argument)
{
	if (argument >= 'A' && argument <= 'Z')
	{
		return (argument + 32);
	}
	else
	{
		return (argument);
	}
}
