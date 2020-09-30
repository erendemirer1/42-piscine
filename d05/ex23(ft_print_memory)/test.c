/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/09/30 23:46:27 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*         команда для компиляции и одновременного запуска программы          */
/*                                                                            */
/*  gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out	   	      */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)				/* функция вывода символа */
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)				/* Принимаем адрес массива символов */
{
	int	i;								/* обьявляем переменную для вычисления позиции ячейки массива от начала к концу */
	int	negativ;						/* обьявляем переменную для хранения информации от знаке числа */
	int	number;							/* обьявляем переменную для хранения самого числа полученного из строки */

	i = 0;								/* Инициализируем перменную чтобы начать просмотр массива с 0 позиции */
	negativ = 0;						/* Инициализируем перменную нулем предположив что число положителное */
	number = 0;							/* Инициализируем перменную нулем для прибавления в нее добытого числа*/

										/* проверим не лежат ли в этой ячейке массива ненужные символы если они там лежат то пропустим их
										**  и перейдем к след позиции */
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
										/* проверим лежит ли в след ячейке массива символ знака числа '-' ,
										** если он там то в переменной negativ указываем то что это число 
										** отрицательное и переходим к след позиции*/
	if (str[i] == '-')
		negativ = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
										/* Наконец дойдя до места в массиве где начинается число мы можем его вывести его от туда
										** и сохранить в целочисленную переменную number */
										/* ВОТ ТАК */
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;					/* умножая на 10 мы освобождаем место для след цифры */
		number += ((int)str[i] - '0');	/* туда где появился 0 прибавляем число которое мы вытащили из строки */
		i++;							/* и переходим к след позиции*/
	}

										/* Дальше перед тем как вернуть число которе мы добыли из строки
										** нужно установить для него тот знак который мы нашли */
	if (negativ == 1)					/* Проверяем, узнали ли мы что число отрицательное */
		return (-number);				/* если число трицательное добавим к нему минус */
	else
		return (number);				/* если чило положительное возвращаем как есть */
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


/* Функция печати адреса первого символа строки */
void ft_print_address(int nbr, char *hex)	/* Принимает в параметры число указывающее порядковый номер адреса относительно начала
											** и адрес строки с символами нужной нам системы счисления */
{
	int		add[9];											
	int 	i;							/* обьявляем счетчик для подсчета количества найденых символов*/
	int		j;							/* обьявляем переменную для вычисления значения показывающего сколько раз нужно печатать символ нуля перед самим адресом */
	int 	base_type;					/* обьявляем переменную для хранения информации о системе счисления */

	i = 0;								/* инициализируем счетчик найденых символов нулем */
	j = 8;								/* инициализируем счетчик заполнения пустых ячеек числом 0 на случай если адресс равен нулю */
	base_type = 16;						/* записываем в переменную для хранения сисстемы счисления число 16 перевода данных в  шестнадцатиричную систему */
	if(nbr == 0)						/* Если порядковый номер указывающий на адресс равен нулю */
	{
		while(j-- > 0)					/* Значит запускаем цикл печатающий 8 символов и завершаем функцию */
			ft_putchar('0');
	}
	else
	{
		while (nbr)						/* пока значение переменной хранящей число не равно нулю */
		{
			add[i] = nbr % base_type;	/* ВЫЧИСЛЯЕМ с помощью base_size ТО, как в нужной нам системе счисления выглядит число.
										** Для этого делим nbr на base_size по модулю и записывая результат в массив начиная с первой ячейки.
										** Так мы узнаем значение крайнего символа в нужной нам системе счисления */

			nbr /= base_type;			/* Теперь для вычисления оставшихся чисел уменьшаем само число в nbr, разделив его на 
										** размер base_size (размер нужного нам базового типа) и сохраняем результат в той же переменной nbr */

			i++;						/* Увеличиваем счетчик для перехода к след ячейке. Так же переменная i нам понадобиться позже. 
										** Накопленное в ней значение скажет нам о размере получившегося массива, которое мы используем 
										** чтобы напечатать символы в правильном порядке. */
		}
		j = (8 - i);					/* узнаем сколько еще осталось места в выводе где должны быть напечатаны симолы */
		while(j-- > 0)					/* Запускаем цикл заполяющий нулями пустые места, которые должны быть заняты или числом или нулями */
			ft_putchar('0');
		while (i > 0)					/* Запускаем цикл который напечатает все найденные нами и записанные в массив 'add' значения символов начиная с конца */
			ft_putchar(hex[add[--i]]);	/* Для этого мы используем массив с каждым найденным нами числом, как указатель на ячеку массива в котрой храниться его значение.
										** Вызывать числа из массива 'add' и вставлять как указательна нужное значение мы будем в обратном порядке.
										** Начиная с конца массива и двигаясь к его началу, чтобы восстановить порядок найденых нами символов */
	}
	ft_putchar(':');					/* После печати адреса в hex печатаем двоеточие */
	ft_putchar(' ');					/* И пробел, и завершаем функцию  */
}


/* Функция печати строки в hex формате */
void	ft_print_hex(int i, unsigned int size, unsigned char *p, char *hex)/* Принимает позицию нужного нам первого символа, предел печати и адресс строки с которой будем работать */
{
	unsigned int	j;					/* обьявляем счетчик отмеряющий пройденые символы */

	j = 0;								/* Инициализируем счетчик нулем чтобы начать печать символов с нулевой позици(относително переменной 'i') */
	while ((j < 16) && (i + j < size))	/* Запускаем цикл печати строки в hex формате. Её длинна должна быть не больше 16 символов и не должна выходить за рамки "size" */
	{
														/* Высчитаваем индекс нужной нам ячейки массива чтобы получить символ и разбив его на две части получить его 
														** шестнадцатиричное значение. Да, мы разберем 8 битный символ на две половины т.к нужная нам шестнадцатиричная
														** система стостоит из 4 битных значений */
		ft_putchar((char)hex[(*(p + i + j) / 16) % 16]);/* Тут вычитываем шестнадцатиричное значение левой половины нужного нам символа */
		ft_putchar((char)hex[*(p + i + j) % 16]);		/* Тут вычитываем шестнадцатиричное значение правой половины нужного нам символа */
		if (j % 2)										
			ft_putchar(' ');
		j++;
	}
	while (j < 16)						/* Если j по прежнему меньше 16 значит мы достигли предела печати символов а место еще осталось и мы заполняем оставшееся пробелами */
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (j % 2)
			ft_putchar(' ');
		j++;
	}
}


/* Функция печати строки длинной в 16 символов */
 void	ft_print_char(int i, unsigned int size, unsigned char *p)/* Принимает позицию нужного нам первого символа, предел печати и адресс строки с которой будем работать */
 {	
	unsigned int	j;											/* обьявляем счетчик отмеряющий пройденые символы */

	j = 0;
	while ((j < 16) && (i + j < size))							/* Запускаем цикл печати той же строки что и выше но уже в стандартном формате 
																** Её длинна должна быть не больше 16 символов */
	{
		if (*(p + i + j) >= 32 && *(p + i + j) <= 126)			/* Если символ являеться печатаемым */
			ft_putchar((char)*(p + i + j));						/* ТО печатаем его */
		else
			ft_putchar('.');									/* Если символ не печатаемый то печатаем вместо него точку */
		j++;													/* переходим к след ячейке массива символов(строки) */
	}
 }


/* Функция печати нужного участка памяти, нужной длинны */
void	*ft_print_memory(void *addr, unsigned int size) /* Принимает в параметрах адресс и число которое покажет сколько мы хотим напечатать */
{
	unsigned int	i;					/* обьявляем переменную для счетчика отмеряющего пройденые строки */
	unsigned char	*p;					/* обьявляем указатель для хранения адреса строки которую мы хотим вытащить из памяти */
	char			*hex;				/* Обьявляем указатель который будет хранить  адресс строки с данными о нужной нам системы счисления */

	i = 0;								/* Инициализируем счетчик нулем чтобы начать работу с первой строкой с нулевой позиции нужной ячейки памяти */
	p = (unsigned char *)addr;			/* Инициализируем указатель сохранив туда адресс перобразованный в тип (unsigned char *) */
	hex = "0123456789abcdef";			/* Инициализируем указатель заполняя его данными о базовом типе нужной нам системы счисления */
	while (i < size)					/* Запускаем цикл с каждой итерацией которого мы печатаем новую строку */
	{
		ft_print_address(i, hex);		/* Запускаем печать адреса первого символа строки отправлям туда позицию нужного нам первого символа и символы для hex*/
		ft_print_hex(i, size, p, hex);	/* Запускаем печать строки в hex. Отправляя позицию нужного нам первого символа, общий предел печати(size) и адресс строки, символы для hex */
		ft_print_char(i, size, p);		/* Запускаем печать строки как есть. Отправляя туда позицию нужного нам первого символа, общий предел печати(size) и адресс строки */
		ft_putchar('\n');				/* Печатаем символ перехода на новую строку */
		i += 16;						/* Увеличиваем значение 'i' на 16 чтобы начать печать след строки с новой позиции на которую укажет 'i' */
	}
	return (addr + i);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_print_memory(argv[1], ft_atoi(argv[2]));
	return (0);
}