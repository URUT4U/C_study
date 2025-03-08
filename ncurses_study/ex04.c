#include <ncurses.h>

int	main(void)
{
	initscr();
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	printw("Here's a string...");
	mvchgat(0, 0, -1, A_BLINK, 1, NULL);
	refresh();
	getch();
	endwin();
	return (0);
}
