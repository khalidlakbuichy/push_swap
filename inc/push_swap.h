/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:47:25 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 15:17:21 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_listint
{
	int					data;
	struct s_listint	*next;

}						t_listint;

typedef struct s_struct
{
	t_listint			*top;
}						t_stack;
int						ft_atoi_enhanced(const char *str, int *error_flag);
#endif