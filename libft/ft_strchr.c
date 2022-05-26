/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:54:58 by ebakchic          #+#    #+#             */
/*   Updated: 2022/05/14 21:30:34 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	ca;
	size_t	i;

	str = (char *)s;
	ca = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == ca)
			return (str + i);
		i++;
	}
	if (c == '\0')
		return (str + i);
	return (NULL);
}