/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:16:52 by nranna            #+#    #+#             */
/*   Updated: 2024/03/22 22:59:12 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

struct	Player
{
	char	nick[12];
	int	hp;
};

int	main(void)
{
	//Here we've created 2 structures.
	struct Player player1;
	struct Player player2;

	//Now we assign the values.
	strcpy(player1.nick, "nathan");
	strcpy(player2.nick, "ooooomaga");
	player1.hp = 2;
	player2.hp = 5;
	/* Another way of assigning values:
	struct Player player1 = {"nathan", 2}
	struct Player player2 = {"oooomaga", 5}*/

	//Now we print the values.
	printf("- Player 1 info -\nnick:\t %s\nhp:\t %i\n", player1.nick, player1.hp);
	printf("- Player 2 info -\nnick:\t %s\nhp:\t %i\n", player2.nick, player2.hp);
}
