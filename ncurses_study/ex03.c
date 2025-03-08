#include <string.h>
#include <ncurses.h>

int	main(void)
{
	char	*msg = "Type a message: ";
	char	str[80];
	int	row, col;

	initscr();
	getmaxyx(stdscr, row, col);
	mvprintw((row / 2), ((col - strlen(msg)) / 2), "%s", msg);
	getstr(str);
	mvprintw((LINES - 2), 0, "You typed: %s", str);
	getch();
	endwin();
	return (0);
}
