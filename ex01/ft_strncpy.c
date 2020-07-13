/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 17:10:28 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/13 17:19:40 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n);
{
	char	*temp;

	temp = dest;
	while (n != 0 && *src)
	{
		*temp++ = *src++;
		n--;
	}
	while (n-- != 0)
		*temp++ = '\0';
	return (dest);
}
