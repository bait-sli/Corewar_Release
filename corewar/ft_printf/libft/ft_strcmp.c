/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:49:32 by bait-sli          #+#    #+#             */
/*   Updated: 2016/11/18 20:09:11 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 < *s2 || *s1 > *s2)
			return ((unsigned char)(*s1) - (unsigned char)*(s2));
		s1++;
		s2++;
	}
	return (0);
}
