/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:22:57 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

void	*ft_memmove(void *d, const void *s, size_t len)
{
	char	*tar;
	char	*src;

	if (!d || !s)
		return (NULL);
	tar = (char*)d;
	src = (char*)s;
	if (tar < src)
		return (ft_memcpy(d, s, len));
	else
	{
		tar += len - 1;
		src += len - 1;
		while (len-- > 0)
			*tar-- = *src--;
	}
	return (d);
}
