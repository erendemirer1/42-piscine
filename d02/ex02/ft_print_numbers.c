/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Create a function that displays all digits, on a single line, by ascending order.	*/

/*	Создать функцию, которая отображает все цифры в одной строке в порядке возрастания.	*/

/* Скомпилируй файл тест. В нем можно увидеть как работает эта функция вживую */

/* ************************************************************************** */

void	ft_putchar(char c);

/* ************************************************************************** */

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}


/* ************************************************************************** */
