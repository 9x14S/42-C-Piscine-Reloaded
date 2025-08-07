/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 9x14s </var/spool/mail/9x14s>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 01:29:20 by 9x14s             #+#    #+#             */
/*   Updated: 2025/08/08 01:29:22 by 9x14s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*result;

	if (NULL == src)
		return (NULL);
	len = ft_strlen(src);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (NULL == result)
		return (NULL);
	while (len >= 0)
	{
		result[len] = src[len];
		len--;
	}
	return (result);
}
