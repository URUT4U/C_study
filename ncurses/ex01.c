/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:36:30 by nranna            #+#    #+#             */
/*   Updated: 2024/06/26 16:25:37 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <unistd.h>

int	main(void)
{
	char	c;

	//start screen
	initscr();
	//no echo on what I just typed
	noecho();
	printw("Hello world! :)");
	refresh();
	//wait for user input;
	c = getch();
	printw("\nYou pressed the \"%c\" key.", c);
	refresh();
	sleep(3);
	endwin();
	return (0);
}
