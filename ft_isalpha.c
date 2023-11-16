/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-haj <iben-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:56:19 by iben-haj          #+#    #+#             */
/*   Updated: 2023/11/14 20:18:38 by iben-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	return (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'));
}
/*=====================testing=======
#include <stdio.h>

int main()
{
	if (ft_isalpha('a') == 1)
		printf("a is an alpha");
	if (ft_isalpha('5') == 0)
		printf("5 is not an alpha");
}
====================================*/