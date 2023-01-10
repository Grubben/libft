/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtrxdo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:25:23 by amaria-d          #+#    #+#             */
/*   Updated: 2023/01/10 09:46:14 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Functional Paradigm
 * Data can be anything. The func function has to know how to deal with it
 * The (void *) is the data that the function receives
 * Anything that's not a 0 is a success
*/
int	mtrxdo(char **mtrx, void *data, int (*func)(char, void *, size_t, size_t))
{
	size_t	j;
	size_t	i;
	int		instant;
	int		accumulate;

	accumulate = 0;
	j = 0;
	while (mtrx[j] != NULL)
	{
		i = 0;
		while (mtrx[j][i] != '\0')
		{
			instant = func(mtrx[j][i], data, i, j);
			if (!instant)
			{
				func(mtrx[j][i], data, i, j);
				return (0);
			}
			accumulate += instant;
			i++;
		}
		j++;
	}
	return (accumulate);
}

/* Example function to use with mtrxdo
int	checkstartpos(char c, void *hiddendata, size_t i, size_t j)
{
	t_info	*data;

	data = hiddendata;
	if (c == COLLECT)
	{
		data->n_collectibles++;
		return (1);
	}
	if (c == PSTARTPOS)
	{
		data->ppos_x = i;
		data->ppos_y = j;
		data->matrixmap[j][i] = EMPTY;
		return (1);
	}
	else if (c == EMPTY || c == WALL || c == EXIT)
		return (1);
	return (0);
}
*/
