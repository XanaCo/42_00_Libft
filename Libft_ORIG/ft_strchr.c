/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancolmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:22:03 by ancolmen          #+#    #+#             */
/*   Updated: 2022/11/22 16:36:02 by ancolmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*str;

	str = (char *)s;
	i = 0;
	len = 0;
	while (s[len])
		len++;
	while (i <= len)
	{
		if ((char)c == s[i])
			return (str + i);
		i++;
	}
	return (0);
}
