/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m4xv3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:36:56 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/18 16:39:16 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	ft_m4xv3(t_matrix4x4 matrix, t_vector3 vector)
{
	vector = ft_v4tov3(ft_m4xv4(matrix, ft_v3tov4(vector)));
	return (vector);
}