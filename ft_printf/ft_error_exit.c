/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_exit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaaskel <ijaaskel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:39:31 by ijaaskel          #+#    #+#             */
/*   Updated: 2022/10/07 16:39:34 by ijaaskel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_error_exit(int error_nbr)
{
		(void)error_nbr;
//	if (error_nbr == 1)
//		ft_putstr("invalid number\n");
//	else if (error_nbr == 2)
//		ft_putstr("| error: invalid flag or specifier |\n");
	exit(1);
}
