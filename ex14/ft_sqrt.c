/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 9x14s </var/spool/mail/9x14s>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 01:28:58 by 9x14s             #+#    #+#             */
/*   Updated: 2025/08/08 01:28:59 by 9x14s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	temp;
	int	i;

	i = 0;
	temp = nb / 2;
	while (i < 32)
	{
		if (temp * temp == nb)
			return (temp);
		else if ((temp + 1) * (temp + 1) == nb)
			return (temp + 1);
		else if ((temp - 1) * (temp - 1) == nb)
			return (temp - 1);
		else if (temp * temp > nb)
			temp -= temp / 2;
		else if (temp * temp < nb)
			temp += temp / 2;
		i++;
	}
	return (0);
}
