/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:26:21 by abouabra          #+#    #+#             */
/*   Updated: 2022/10/05 16:00:34 by abouabra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*s;

	s = str + ft_strlen(str);
	while (s != str
		&& *(unsigned char *)s != (unsigned char)c)
		s--;
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (0);
}
