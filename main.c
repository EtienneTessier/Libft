/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:58:47 by etienne           #+#    #+#             */
/*   Updated: 2024/03/21 17:02:45 by etienne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>


int	main(void)
{
	// ft_isalpha
	printf("\nft_isalpha :\n");
	printf("a :%d\n", ft_isalpha('a'));
	printf("C :%d\n", ft_isalpha('C'));
	printf("= :%d\n", ft_isalpha('='));
	printf("0 :%d\n", ft_isalpha('0'));
	printf("V :%d\n", ft_isalpha('V'));
	printf(". :%d\n", ft_isalpha('.'));

	// ft_isdigit
	printf("\nft_isdigit :\n");
	printf("a :%d\n", ft_isdigit('a'));
	printf("1 :%d\n", ft_isdigit('1'));
	printf("= :%d\n", ft_isdigit('='));
	printf("0 :%d\n", ft_isdigit('0'));
	printf("V :%d\n", ft_isdigit('V'));
	printf(". :%d\n", ft_isdigit('.'));

	// ft_isalnum
	printf("\nft_isalnum :\n");
	printf("a :%d\n", ft_isalnum('a'));
	printf("C :%d\n", ft_isalnum('C'));
	printf("= :%d\n", ft_isalnum('='));
	printf("0 :%d\n", ft_isalnum('0'));
	printf("V :%d\n", ft_isalnum('V'));
	printf(". :%d\n", ft_isalnum('.'));

	// ft_isascii
	printf("\nft_isascii :\n");
	printf("-1 :%d\n", ft_isascii(-1));
	printf("C :%d\n", ft_isascii('C'));
	printf("= :%d\n", ft_isascii('='));
	printf("0 :%d\n", ft_isascii('0'));
	printf("128 :%d\n", ft_isascii(128));
	printf(". :%d\n", ft_isascii('.'));

	// ft_isprint
	printf("\nft_isprint :\n");
	printf("\\n :%d\n", ft_isprint('\n'));
	printf("C :%d\n", ft_isprint('C'));
	printf("= :%d\n", ft_isprint('='));
	printf("0 :%d\n", ft_isprint('0'));
	printf("DEL :%d\n", ft_isprint(127));
	printf(". :%d\n", ft_isprint('.'));

	// ft_strlen
	printf("\nft_strlen :\n");
	printf("Je suis content:%d\n", ft_strlen("Je suis content"));
	printf(":%d\n", ft_strlen(""));
	printf("Je suis:%d\n", ft_strlen("Je suis"));

	// ft_memset
	printf("\nft_memset :\n");
	char *str = "bonjour les amis";
	//ft_memset(str + 3, '.', 2*sizeof(char));
	//printf("bonjour :%s\n", str);
	
	char tab[100];
    memset(tab, 0, 100);
    ft_memset(tab, 'A', 0);
    ft_memset(tab, 'A', 42);
	printf("tab = %s\n", tab);/*
    int i = 0;
    for (; i < 100 && tab[i] == 'A'; ++i)
        write;*/
    write(1, "\n", 1);

}
