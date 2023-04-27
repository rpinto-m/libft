/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:35:43 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/22 15:41:59 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Allocate (with malloc(3)) and returns a “fresh” string ending 
**  with ’\0’ representing the integer n given as argument.
**  Negative numbers must be supported. If the allocation fails,
**  the function returns NULL.
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

// Function returns the length of a number, including the '-' sign
static int	ft_len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

// Function takes an 'int' and converts in to a null-terminated string
char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		i;

	nbr = n;
	i = ft_len (nbr);
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nbr == 0)
		str[0] = '0';
	else if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[i] = (nbr % 10 + '0');
		nbr = nbr / 10;
		i--;
	}
	return (str);
}
/*
A função "ft_len" recebe um número inteiro longo e retorna
seu comprimento em dígitos. Se o número for zero, retorna 1.
Se for negativo, converte-o em positivo e incrementa o
comprimento em 1 para contar o sinal negativo.
A função "ft_itoa" recebe um número inteiro, converte-o em
uma string de caracteres e retorna um ponteiro para ela. Ele
chama a função "ft_len" para determinar o tamanho necessário
da string, aloca a memória necessária para a string e preenche-a
com os dígitos do número convertido. Se o número for zero,
coloca um único caractere '0' na string. Se for negativo, coloca
um sinal '-' na string e converte o número para seu valor absoluto
positivo antes de preencher a string com os dígitos. A string
resultante é terminada com um caractere nulo.
Como a string deve ser nula-terminada, o último caractere da string
é definido como nulo usando str[i--] = '\0'. A variável i é
decrementada para apontar para o último caractere válido na string.
Ao fazer str[i--] = '\0';, o caractere nulo é adicionado na última
posição válida da string convertida antes de i ser decrementado,
garantindo que a string seja nula-terminada corretamente.
*/
