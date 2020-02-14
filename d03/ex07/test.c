/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*	команда для компиляции и одновременного запуска                           */
/*                                                                            */
/*  gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out	   	      */
/* ************************************************************************** */


#include <unistd.h>

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

int		ft_putchar(char c)
{
	write(1, &c, 1);

	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

void	ft_put_arr_char(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

char		*ft_strrev(char *str)	/* Принимаем адрес массива символов */
{
	int		i;						/* обьявляем переменную для счета позиции массива от начала к концу */
	int		l;						/* обьявляем переменную для подсчета длинны массива и используем ее
									 * потом счета позици массива с конца с конца к началу */
	char	t;						/* обьявляем переменную для временного хранения символа */

	l = 0;							/* инициализируем переменную для записи туда длинны массива */
	while (str[l] != '\0')			/* проверяем первый элемент массива, если он пуст или имеет символ'\n' -завершаем цикл */
		l++;						/* если массив не пуст то прибавляем в переменную один и проверяем сл ячеку массива	*/

	i = -1;							/* Установим i = -1; по тому что потом мы должны отталкиватся от 0 и 
									 * при этом иметь в цикле префиксный инкремент( ++i ) */
	while (++i < --l)				/* проверяем каждую итерацию дошел ли индекс i указывающий на начало массива до середины
									 * и дошел ли индекс l указывающий на конец массива до середины.
									 * если они встретились в середине значит цикл завершен */
	{
		t = str[i];					/* сохраняем символ во временной переменной */
		str[i] = str[l];			/* теперь запихиваем в str[i] значение str[l] из конца массива */
		str[l] = t;					/* теперь запихиваем в str[l] из конца массива значение из временной переменной t 
									 * кторая хранит значение из начала массива */
	}								/* И так все идет от краев к середине меняясь символами чтобы в конце получить перевернутую строку */
	return (str);					/* возвращаем адресс массива который перевернули */
}





int 	main(void)
{
	char	*p;						/* обьявляем указатель который будет хранить адрес перевернутой строки( массива символов) */
	char	i[] = {"54321"};		/* создаем массив символов который мы будем переворачивать */

	p = ft_strrev(i);				/* инициализируем указатель - мы вызываем функцию переворота строки отдавая ей 
									 * в аргументы адресс масива. Функция перевернет массив и вернет нам его адрес,
									 * который и сохранится в указателе */
	ft_put_arr_char(p);				/* Проверим получилось ли перевернуть строку. Напечатаем этот массив символов(строку) */

	return 0;
}
