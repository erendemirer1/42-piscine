/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 00:54:23 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/25 01:11:33 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **x, char **y)
{
	char *temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int		getlength(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;
	int size;

	i = 0;
	size = getlength(tab);
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}



/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		length;
	int		i;
	char	*tmp;

	length = 0;
	while (tab[length])
		length++;
	i = 0;
	while (i < (length - 1))
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		sorted;
	char	*tmp;

	sorted = 0;
	while (!sorted)
	{
		i = 0;
		sorted = 1;
		while (tab[i + 1])
		{
			if ((*cmp)(tab[i], tab[i + 1] > 0))
			{
				sorted = 0;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i += 1;
		}
	}
}



/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
