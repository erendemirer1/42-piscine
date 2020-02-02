/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/16 12:59:40 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/18 21:08:26 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	if (nb >= 2)
	{
		i = 0;
		f = nb;
		while (++i < nb)
			f = f * (nb - i);
		return (f);
	}
	else
		return (1);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int	ft_iterative_factorial(int nb)
{
	int	total;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb < 2)
		return (1);
	total = nb--;
	while (nb > 1)
	{
		total *= nb;
		nb--;
	}
	return (total);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	if (nb > 12 || nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		factorial;
	int		i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	factorial = 1;
	i = 0;
	while (i++ < nb)
		factorial *= i;
	return (factorial);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

