/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:58:47 by etienne           #+#    #+#             */
/*   Updated: 2024/04/08 10:05:33 by etienne          ###   ########.fr       */
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

	// ft_strlcpy
	printf("\nft_strlcpy :\n");
	char destlcpy[100];
	int result_lcpy;
	result_lcpy = ft_strlcpy(destlcpy, "bonjour", 5);
	printf("bonjour(5), %s, %d\n", destlcpy, result_lcpy);
	result_lcpy = ft_strlcpy(destlcpy, "coucou", 6);
	printf("coucou(6), %s, %d\n", destlcpy, result_lcpy);
	result_lcpy = ft_strlcpy(destlcpy, "salut", 0);
	printf("salut(0), %s, %d\n", destlcpy, result_lcpy);

	// ft_memset
	printf("\nft_memset :\n");
	char tab[100];
    memset(tab, 0, 100);
    ft_memset(tab, 'A', 0);
    ft_memset(tab, 'A', 42);
	printf("tab = %s\n", tab);

	// ft_bzero
	printf("\nft_bzero\n");
	char tab2[100];
    ft_bzero(tab2, 0);
    ft_bzero(tab2, 42);
	printf("tab2 = %s\n", tab2);

	// ft_memcpy
	printf("\nft_memcpy\n");
	char destcpy[100];
	memset(destcpy, 'A', 100);
	printf("dest: %s\n", destcpy);
	ft_memcpy(destcpy, "coucou", 0);
	printf("ft 0 dest: %s\n", destcpy);
	ft_memcpy(destcpy, "coucou", 3);
	printf("ft 3 dest: %s\n", destcpy);
	memset(destcpy, 'A', 100);
	printf("reset dest: %s\n", destcpy);
	memcpy(destcpy, "coucou", 3);
	printf("og 3 dest: %s\n", destcpy);

/*	// ft_memmove
	printf("\nft_memmove\n");
	char destmove[100];
	memset(destmove, 'A', 100);
	printf("dest: %s\n", destmove);
	ft_memmove(destmove, "coucou", 0);
	printf("ft 0 dest: %s\n", destmove);
	ft_memmove(destmove, "coucou", 3);
	printf("ft 3 dest: %s\n", destmove);
	memset(destmove, 'A', 100);
	printf("reset dest: %s\n", destmove);
	memcpy(destmove, "coucou", 3);
	printf("og 3 dest: %s\n", destmove);
*/
	// ft_toupper
	printf("\nft_toupper\n\n");
	printf("a :%c\n", ft_toupper('a'));
	printf("A :%c\n", ft_toupper('A'));
	printf("0 :%c\n", ft_toupper('0'));
	printf("l :%c\n", ft_toupper('l'));
	printf(": :%c\n", ft_toupper(':'));

	// ft_tolower
	printf("\nft_tolower\n\n");
	printf("a :%c\n", ft_tolower('a'));
	printf("A :%c\n", ft_tolower('A'));
	printf("0 :%c\n", ft_tolower('0'));
	printf("l :%c\n", ft_tolower('l'));
	printf("L :%c\n", ft_tolower('L'));
	printf(": :%c\n", ft_tolower(':'));

	// ft_strchr
	printf("\nft_strchr\n\n");
	printf("'s' je suis content : %s\n", ft_strchr("je suis content", 's'));
	printf("'c' je suis content : %s\n", ft_strchr("je suis content", 'c'));
	printf("'z' je suis content : %s\n", ft_strchr("je suis content", 'z'));
	printf("'e' je suis content : %s\n", ft_strchr("je suis content", 'e'));
	printf("'9' je suis content : %s\n", ft_strchr("je suis content", '9'));

	// ft_strrchr
	printf("\nft_strrchr\n\n");
	printf("'s' je suis content : %s\n", ft_strrchr("je suis content", 's'));
	printf("'c' je suis content : %s\n", ft_strrchr("je suis content", 'c'));
	printf("'z' je suis content : %s\n", ft_strrchr("je suis content", 'z'));
	printf("'e' je suis content : %s\n", ft_strrchr("je suis content", 'e'));
	printf("'9' je suis content : %s\n", ft_strrchr("je suis content", '9'));

	// ft_strncmp
	printf("\nft_strncmp\n\n");
	printf("ABC ABC 3: %d\n", ft_strncmp("ABC","ABC", 3));
	printf("ABC AB 3: %d\n", ft_strncmp("ABC","AB", 3));
	printf("AB ABC 3: %d\n", ft_strncmp("AB","ABC", 3));
	printf("ABC ZBC 3: %d\n", ft_strncmp("ABC","ZBC", 3));
	printf("ABC AB 2: %d\n", ft_strncmp("ABC","AB", 2));

}
