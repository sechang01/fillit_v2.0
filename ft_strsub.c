/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 15:03:55 by sechang           #+#    #+#             */
/*   Updated: 2018/07/25 15:05:05 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*s_new;
	size_t			i;

	i = 0;
	if (!s || start > ft_strlen(s))
		return (NULL);
	if (!(s_new = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len && *s)
	{
		s_new[i] = s[start];
		i++;
		start++;
	}
	s_new[i] = '\0';
	return (s_new);
}
