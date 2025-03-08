/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:25:44 by nranna            #+#    #+#             */
/*   Updated: 2025/02/20 19:30:23 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>

int	main(void)
{
	int	ch;

	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();

	printw("Press some key!");
	ch = getch();
	if (ch == KEY_F(1))
		printw("You pressed F1!");
	else
	{
		printw("The key you pressed was: ");
		attron(A_BOLD);
		printw("%c", ch);
		attroff(A_BOLD);
	}
	refresh();
	getch();
	endwin();
	return (0);
}
