/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:20:05 by gialexan          #+#    #+#             */
/*   Updated: 2022/05/27 22:43:51 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*aux;
	int	i;

	i = 0;
	aux = (int *) malloc ((max - min) * sizeof(int));
	if (min >= max)
	{
		return (NULL);
	}
	while (min < max)
	{
		aux[i] = min;
		min++;
		i++;
	}
	return (aux);
}
