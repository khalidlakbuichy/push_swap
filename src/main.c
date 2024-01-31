/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:42:42 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 15:08:17 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_args(int ac, char **av)
{
    int i;
    
    i = 1;
    while (i <= ac)
    {
        
    }
    
}
int	main(int ac, char **av)
{
	if (ac <= 1)
	{
		ft_putendl_fd("Error");
		return (EXIT_FAILURE);
	}
	ft_check_args(ac, char **av);
}