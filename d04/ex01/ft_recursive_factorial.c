/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/16 14:21:10 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/18 21:05:38 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_recursive_factorial(int nb)
{
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int		ft_recursive_factorial(int nb)
{
	if (nb >= 2)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		return (1);
	}
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int		ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb == 0)
		return (1);
	return (0);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
