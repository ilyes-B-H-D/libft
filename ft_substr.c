/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-haj <iben-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:18:38 by iben-haj          #+#    #+#             */
/*   Updated: 2023/11/14 18:56:59 by iben-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	str_len;
	size_t	i;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}
/*=====================testing=======
#include <stdio.h>

int main()
{
    // const char *original = "This is a sample string.";
    // unsigned int start = 5;
    // size_t length = 10;

    // char *substring = ft_substr(original, start, length);
    char *substring = ft_substr("hola", 0, 123);

    if (substring != NULL)
    {
        // printf("Original string: %s\n", original);
        printf("Substring: %s\n", substring);
        free(substring); 
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
====================================*/