/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_delete.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:05:42 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 16:47:14 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void		*vector_delete(t_vector *vector)
{
	if (!vector)
		return (NULL);
	free(vector->memory);
	free(vector);
	return (NULL);
}
