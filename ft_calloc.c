/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmurovec <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 11:33:09 by jmurovec      #+#    #+#                 */
/*   Updated: 2020/11/08 15:25:59 by jmurovec      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*pt;

	pt = malloc(count * size);
	if (!pt)
		return (NULL);
	pt = ft_memset(pt, 0, count * size);
	return (pt);
}
