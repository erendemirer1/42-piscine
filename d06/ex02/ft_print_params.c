/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/20 16:31:35 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/20 16:41:06 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	z;

	i = 1;
	z = 0;
	while (i < argc)
	{
		while (argv[i][z])
		{
			ft_putchar(argv[i][z]);
			z++;
		}
		ft_putchar('\n');
		z = 0;
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */


int 	main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i++ < argc - 1)
	{
		while (*argv[i] != '\0')
		{
			ft_putchar(*argv[i]);
			*argv[i]++;
		}
		ft_putchar('\n');
	}
	return (0);
}

/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */

int		main(int argc, char **argv)
{
	int	i;
	int n;

	i = 1;
	while (i < argc)
	{
		n = 0;
		while (argv[i][n] != '\0')
		{
			ft_putchar(argv[i][n]);
			n++;
		}
		ft_putchar('\n');
		i++;
	}
}

/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */

int		main(int argc, char *argv[])
{
	int i;
	int y;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			y = 0;
			while (argv[i][y] != '\0')
			{
				ft_putchar(argv[i][y]);
				y++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */


int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (--argc)
	{
		while (argv[j][i])
			ft_putchar(argv[j][i++]);
		i = 0;
		j += 1;
		ft_putchar('\n');
	}
	return (0);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

