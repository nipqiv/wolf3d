/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pf_10_power_n.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/13 15:15:49 by jandre-d       #+#    #+#                */
/*   Updated: 2019/04/29 19:48:31 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int64_t	pf_10_power_n(int32_t n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (10);
	return (10 * pf_10_power_n(n - 1));
}
