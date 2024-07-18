/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:25:14 by marvin            #+#    #+#             */
/*   Updated: 2024/07/18 10:18:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	sum_cards_2345(char *mano, int i, int total)
{
	if (mano[i] == '2')
		total += 2;
	else if (mano[i] == '3')
		total += 3;
	else if (mano[i] == '4')
		total += 4;
	else if (mano[i] == '5')
		total += 5;
	return (total);
}

int	sum_cards_6789(char *mano, int i, int total)
{
	if (mano[i] == '6')
		total += 6;
	else if (mano[i] == '7')
		total += 7;
	else if (mano[i] == '8')
		total += 8;
	else if (mano[i] == '9')
		total += 9;
	return (total);
}

int	sum_cards_a(int count_a, int total)
{
	while (count_a != 0)
	{
		if (total <= 10)
			total += 11;
		else
			total++;
		count_a--;
	}
	return (total);
}

int	sum_cards_blackjack(char *mano, int i, int total, int count_a)
{
	while (mano[i] != '\0')
	{
		if (mano[i] == '2' || mano[i] == '3'
			|| mano[i] == '4' || mano[i] == '5')
			total = sum_cards_2345(mano, i, total);
		else if (mano[i] == '6' || mano[i] == '7'
			|| mano[i] == '8' || mano[i] == '9')
			total = sum_cards_6789(mano, i, total);
		else if (mano[i] == 'T' || mano[i] == 'J'
			|| mano[i] == 'D' || mano[i] == 'K')
			total += 10;
		else if (mano[i] == 'A')
			count_a++;
		else
		{
			printf("Los carácteres tiene que ser entre 23456789TJDKA\n");
			return (0);
		}
		i++;
	}
	total = sum_cards_a(count_a, total);
	return (total);
}

int	main(int argc, char *argv[])
{
	int		sumcards;
	int		i;
	int		total;
	int		count_a;

	i = 0;
	total = 0;
	count_a = 0;
	if (argc == 2)
	{
		sumcards = sum_cards_blackjack(argv[1], i, total, count_a);
		if (sumcards == 21)
			printf("Blackjack!\n");
		else if (sumcards <= 1)
			return (0);
		else
			printf("%d\n", sumcards);
	}
}
