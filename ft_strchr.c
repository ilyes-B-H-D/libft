/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-haj <iben-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:27:56 by iben-haj          #+#    #+#             */
/*   Updated: 2023/11/14 20:01:23 by iben-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
/*=====================testing=======
#include <string.h>
#include <stdio.h>

int main()
{

	// printf("%s\n", ft_strchr(NULL, 'c'));
	printf("%s\n", strchr("hello Bro", 1090));
	printf("%s\n", ft_strchr("hello Bro", 1090));
    return 0;
}
====================================*/
