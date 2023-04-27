/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:47:53 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/21 18:31:45 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// MEMSET(3)                 Library Functions Manual                MEMSET(3)
//
// NAME
//      memset – fill a byte string with a byte value
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      void *memset(void *b, int c, size_t len);
//
// DESCRIPTION
//      The memset() function writes len bytes of value c (converted to an 
//  	unsigned char) to the string b.
//
// RETURN VALUES
//      The memset() function returns its first argument.
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
Essa função implementa a operação "memset", que preenche os
primeiros "len" bytes da área de memória apontada por "b"
com o valor "c".

O funcionamento da função é o seguinte:
- A função recebe como entrada um ponteiro "b" para a área
  de memória que será preenchida, um inteiro "c" que representa
  o valor que será preenchido e um tamanho "len" que especifica
  quantos bytes serão preenchidos.
- A função usa um loop "while" para percorrer cada byte da área
  de memória, começando do primeiro byte e indo até o byte "len".
- Dentro do loop, a função atribui o valor "c" ao byte atual da
  área de memória usando um casting para transformar o ponteiro "b"
  em um ponteiro do tipo "unsigned char". Isso é necessário porque
  a operação de atribuição funciona em bytes e não em inteiros.
- Depois de preencher todos os "len" bytes da área de memória, a
  função retorna o ponteiro "b" como saída.

Essa função é útil para inicializar uma área de memória com um valor
específico antes de começar a usá-la, por exemplo, para inicializar
um buffer que será usado para armazenar dados recebidos pela rede ou
para inicializar uma matriz que será usada em cálculos matemáticos.

// *** ***

A função começa definindo uma variável "i" como zero. Ela então entra
em um loop que irá executar enquanto "i" for menor que "len". Dentro
do loop, o valor "c" é atribuído para cada byte do bloco de memória
apontado pelo ponteiro "b". Isso é feito convertendo "b" para um
ponteiro de caractere sem sinal e indexando-o com "i". Finalmente, a
variável "i" é incrementada em um para apontar para o próximo byte do
bloco de memória.

Assim que o loop termina, a função retorna o ponteiro "b". O bloco
de memória agora foi preenchido com o valor "c" e está pronto para ser
usado em outras partes do programa.
*/
