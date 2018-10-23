/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vsteyaer <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 20:56:23 by vsteyaer     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 20:56:24 by vsteyaer    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		n;
	char	*tab;

	n = 0;
	n = ft_strlen(src);
	if (!(tab = (char*)(malloc(sizeof(char) * (n + 1)))))
		return (NULL);
	n = 0;
	while (src[n] != '\0')
	{
		tab[n] = src[n];
		n++;
	}
	tab[n] = '\0';
	return (tab);
}
