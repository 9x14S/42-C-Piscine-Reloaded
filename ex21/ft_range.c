/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 9x14s </var/spool/mail/9x14s>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 01:29:24 by 9x14s             #+#    #+#             */
/*   Updated: 2025/08/08 01:29:25 by 9x14s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	abs_min;
	int	i;
	
	if (min >= max)
		return (NULL);
	abs_min = min;
	if (min < 0)
		abs_min = -min;
	int	*array = (int *)malloc(sizeof(int) * (max + abs_min));
	if (NULL == array)
		return (NULL);
	i = 0;
	while (min < max)
		array[i++] = min++;
	return (array);
}
