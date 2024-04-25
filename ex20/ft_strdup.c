/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:44:20 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/18 12:10:28 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (*src != '\0')
	{
		len++;
		src++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = ((char *)malloc((ft_strlen(src) + 1) * sizeof(char)));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_strdup("Hello World!"));
	return (0);
}*/
