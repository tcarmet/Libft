/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/29 17:28:23 by tcarmet           #+#    #+#             */
/*   Updated: 2014/12/29 17:28:24 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	char	a;
	int		f;
	int		d;

	f = ft_strlen(str) - 1;
	d = 0;
	while (d < f && d != f)
	{
		a = str[f];
		str[f] = str[d];
		str[d] = a;
		f--;
		d++;
	}
	return (str);
}
