/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:51:38 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/14 14:25:28 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int	i;
	int x;
	int	c;
	int	count;

	i = 0;
	while (i < length)
	{
		x = 0;
		c = tab[i];
		count = 0;
		while (x < length)
		{
			if (tab[x] == c)
				count++;
			x++;
		}
		if (count % 2 == 1)
			return (tab[i]);
		i++;
	}
	return (0);
}





/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int		ft_unmatch(int *tab, int length)
{
	int i;
	int count;
	int j;

	i = 0;
	while (i < length)
	{
		j = 0;
		count = 0;
		while (tab[j] < length)
		{
			if (tab[j] == tab[i])
				count++;
			j++;
		}
		if (count % 2)
			return (tab[i]);
		i++;
	}
	return (0);
}



/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int		ft_unmatch(int *tab, int length)
{
	int i;
	int cur;
	int fnd;

	cur = 0;
	while (cur < length)
	{
		i = 0;
		fnd = 0;
		while (i < length && !fnd)
		{
			if (i != cur)
				fnd = (tab[i] == tab[cur]) ? 1 : 0;
			i += 1;
		}
		if (!fnd)
			return (tab[cur]);
		cur += 1;
	}
	return (tab[cur]);
}



/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
