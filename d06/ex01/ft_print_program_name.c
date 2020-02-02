/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/20 16:18:26 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/20 16:29:32 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc = 0;
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	return (0);
}


/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */

int 	main(int argc, char *argv[])
{
	while (*argv[0] != '\0')
	{
		ft_putchar(*argv[0]);
		*argv[0]++;
	}
	ft_putchar('\n');
	return (0);
}

/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */

int		main(int argc, char **argv)
{
	const char	*c = argv[0];
	int			i;

	i = 0;
	if (argc)
	{
		while (c[i] != '\0')
		{
			ft_putchar(c[i]);
			i++;
		}
	}
	ft_putchar('\n');
}


/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */

int		main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		i = 0;
		while (argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			i++;
		}
	}
	return (0);
}

/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
	{
		while (argv[0][i])
			ft_putchar(argv[0][i++]);
		ft_putchar('\n');
	}
	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
