/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chgat_blink_colors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:41:20 by nranna            #+#    #+#             */
/*   Updated: 2025/02/26 11:44:21 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>

int	main(int argc, char **argv)
{
	initscr();
	start_color();
	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	printw("Lorem ipsum");
	mvchgat(0, 0, -1, A_BLINK, 1, NULL);
	refresh();
	getch();
	endwin();
	return (0);
}
