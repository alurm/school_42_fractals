/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelman <ghelman@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:14 by ghelman           #+#    #+#             */
/*   Updated: 2021/11/15 17:17:14 by ghelman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Assume "C" locale and ASCII. */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
