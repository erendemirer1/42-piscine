/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/05/12 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*	команда для компиляции и одновременного запуска                           */
/*                                                                            */
/*  gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out	   	      */
/* ************************************************************************** */


/* 
 * ===-----------------------------------------------------------------------===
 *
 * 
 *	• Напишите функцию ft_compact, которая примет массив параметра char * и 
 *	перезапишет все элементы, которые указывают на 0.
 *	
 *	• Эта функция будет прототипирована следующим образом:
 *										int	ft_compact(char  *tab, int length)
 *	
 *	• Эта функция вернет новый размер массива
 *
 *	• Не уверен, что вы понимаете, что делает эта функция? Она существует в Ruby.
 *
 * 
 * ===-----------------------------------------------------------------------===
 */

#include <unistd.h>
#include <stdlib.h>
#include "ft_perso.h"

/* ************************************************************************** */

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char		*ft_get_name(int *i, char *str)
{
	int		j;
	char	*name;

	j = 0;
	name = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	while ((str[*i] >= 'a' && str[*i] <= 'z')
			|| (str[*i] >= 'A' && str[*i] <= 'Z'))
		name[j++] = str[*i++];
	name[j] = '\0';
	return (name);
}

int			ft_get_age(int *i, char *str)
{
	int age;

	age = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
		age = (age * 10) + (str[*i++] - '0');
	return (age);
}

t_perso		**ft_create_struct_tab(char *str, int nbstructs)
{
	int		i;
	int		j;
	t_perso	**tab;

	i = 0;
	j = 0;
	tab = (t_perso **)malloc(sizeof(t_perso**) * (nbstructs + 1));
	while (str[i])
	{
		tab[j]->age = ft_get_age(&i, str);
		i += 1;
		tab[j]->name = ft_get_name(&i, str);
		i += 1;
		j += 1;
	}
	return (tab);
}

t_perso		**ft_decrypt(char *str)
{
	int i;
	int nbstructs;

	i = 0;
	nbstructs = 0;
	while (str[i])
	{
		while (str[i] >= '0' && str[i] <= '9')
			i += 1;
		if (str[i] == '|')
			i += 1;
		while ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'))
			i += 1;
		if (str[i] == ';')
			i += 1;
		nbstructs += 1;
	}
	return (ft_create_struct_tab(str, nbstructs));
}


int main(void)
{
	char *arr[] = {"skdjnksd "," skjnskdf"," sds_0 "};
	ft_compact(arr, 3);
	ft_putstr_tab(arr);

    return (0);		
}