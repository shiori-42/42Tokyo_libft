/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:49:20 by syonekur          #+#    #+#             */
/*   Updated: 2024/01/03 14:32:36 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t dest_size)
{
	size_t	src_size;
	size_t	i;

	src_size = ft_strlen_s(src);
	i = 0;
	while (src[i] && i + 1 < dest_size)
	{
		dest[i] = src[i];
		i++;
	}
	if (dest_size)
		dest[i] = '\0';
	return (src_size);
}

// int	main(void)
// {
// 	char	s2[50];

// 	char s1[] = "Hello World!";
// 	// Test 1: Basic test
// 	printf("Returned: %zu, Result: %s\n", ft_strlcpy(s2, s1, 5), s2);
// 	// Test 2:
// 	printf("Returned: %zu, Result: %s\n", ft_strlcpy(s2, s1, sizeof(s2)), s2);
// 	// Test 3:
// 	// 12 chars + null terminator
// 	printf("Returned: %zu, Result: %s\n", ft_strlcpy(s2, s1, 13), s2);
// 	// Test 4:
// 	printf("Returned: %zu, Result: -not printed-\n", ft_strlcpy(s2, s1, 0));
// 	// Test 5:
// 	printf("Returned: %zu, Result: %s\n", ft_strlcpy(s2, "", sizeof(s2)), s2);
// 	return (0);
// }
