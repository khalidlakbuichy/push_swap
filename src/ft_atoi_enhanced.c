/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_enhanced.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:11:04 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 15:16:42 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	is_white(int c)
{
	if (c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
		|| c == '\f')
		return (1);
	return (0);
}

int	ft_atoi_enhanced(const char *str, int *error_flag)
{
	int signe;
	unsigned int nb;

	signe = 1;
	nb = 0;
	*error_flag = 0;
	while (is_white(*str))
		str++;
	if (*str == '-')
		signe = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0')
	{
		if (ft_isdigit(*str))
			nb = (nb * 10) + ((*str - '0'));
		else
		{
			*error_flag = 1;
			return (0);
		}
	}
	return ((int)nb * signe);
}