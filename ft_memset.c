/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-haj <iben-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:25:13 by iben-haj          #+#    #+#             */
/*   Updated: 2023/11/14 20:00:59 by iben-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memset should be able to work with memory blocks of different types,
// including arrays of integers, characters, structures... and that's why 
//we are using the type void *, to accept any datatype passed here
void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (num--)
		p[num] = (unsigned char)value;
	return (ptr);
}
/*
#include <stdio.h>
#include <stdio.h>
int main()
{
    int ptr[] = {1, 2, 2};
    ft_memset(ptr, 320, 4);
    printf("%d\n", ptr[0]);
}
#include <string.h>

int main()
{
    int arr[5];
    // size_t is a special unsigned integer type
    // defined in the standard library of C and C++ languages
    size_t size = sizeof(arr);

    ft_memset(arr, 0, size);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    memset(arr, 0, size);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/
