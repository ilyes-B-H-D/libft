/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-haj <iben-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:58:04 by iben-haj          #+#    #+#             */
/*   Updated: 2023/11/14 20:18:12 by iben-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	return (('0' <= i && i <= '9'));
}
/*=====================testing=======
#include <stdio.h>

int main()
{
	if (ft_isdigit('a') == 0)
		printf("a is not a digit\n");
	if (ft_isdigit(5) == 1)
		printf("5 is a digit");
}
====================================*/
