/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/19 15:29:18 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/20 18:42:44 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	iss_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(iss_lowercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int	i;
	int	b;

	b = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			b = 1;
		else
			return (0);
		i++;
	}
	return (b);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

