/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:27:06 by abouabra          #+#    #+#             */
/*   Updated: 2022/10/02 13:36:00 by abouabra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == 0)
		return ((char *)big);
	if (len == 0)
		return (0);
	while (big[i] && i + ft_strlen(little) <= len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && big[i + j] == little[j])
				j++;
			if (little[j] == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}