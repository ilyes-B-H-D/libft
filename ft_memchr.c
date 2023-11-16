/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-haj <iben-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:02:22 by iben-haj          #+#    #+#             */
/*   Updated: 2023/11/05 11:34:55 by iben-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
//  search for a specific byte in a block of memory
int main() {
    const char str[] = "Hello, World!";
    int search_char = 'o';

    // Search for 'o' in the string
    const char *result = (const char *)ft_memchr(str, search_char, strlen(str));

    if (result != NULL) {
        printf("Found '%c' at position %ld\n", search_char, result - str);
    } else {
        printf("'%c' not found in the string.\n", search_char);
    }

    return 0;
}
*/
