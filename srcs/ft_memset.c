/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:50:36 by tcarmet           #+#    #+#             */
/*   Updated: 2015/05/22 22:26:55 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*i;

	if (len == 0)
		return (b);
	i = (unsigned char *)b;
	while (--len)
	{
		*i = (unsigned char)c;
		i++;
	}
	return (b);
}
