/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/15 13:20:04 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/15 13:33:37 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* - Скомпилируй файл тест. В нем можно увидеть как работает эта функция вживую */

/* ************************************************************************** */
/* ************************************************************************** */
/* **************************************************************************


Create a function that displays a string of characters on the standard output.
Создайте функцию, которая отображает строку символов в стандартном выводе.


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


/* ************************************************************************** */

void    ft_putchar(char c);

/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		ft_putchar(str[counter]);
		counter++;
	}
}




/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

void		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int con;
	int n;

	con = 1;
	n = 0;
	while (con)
	{
		if (str[n] == '\0')
		{
			con = 0;
		}
		else
		{
			ft_putchar(str[n]);
		}
		n++;
	}
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
