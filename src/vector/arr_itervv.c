/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_itervv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 02:16:31 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

void	arr_itervv(t_array *arr, void *user_data1, void *user_data2,
	void (*f)(size_t, long long, void *, void *))
{
	size_t		qt;

	if (!arr || arr->length == 0)
		return ;
	qt = -1;
	while (++qt < arr->length)
		f(qt, arr->field[qt], user_data1, user_data2);
}