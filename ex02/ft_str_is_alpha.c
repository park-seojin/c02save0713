/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 17:26:04 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/13 17:35:53 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_srt_is_alpha(char *str)
{
	while (*str)
	{
		if (!('a' <= *str && *str <= 'z'))
			break ;
		else if (!('A' <= *str && *str <= 'Z'))
			break ;
		str++;
	}
	if (*str)
		return (0);
	else
		return (1);
}
