/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-haj <iben-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:28:25 by iben-haj          #+#    #+#             */
/*   Updated: 2023/11/14 20:01:46 by iben-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*=====================testing=======
#include <string.h>
#include <stdio.h>

int main()
{

	// printf("%s\n", ft_strchr(NULL, 'c'));
	// printf("%s\n", ft_strdup(NULL));
	printf("%s\n", strdup(NULL));
    return 0;
}
#include <stdio.h>

int main()
{
    const char *original = "This is a test string.";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Original string: %s\n", original);
        printf("Duplicated string: %s\n", duplicate);
        free(duplicate); // Don't forget to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
====================================*/