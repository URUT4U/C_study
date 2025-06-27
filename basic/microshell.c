/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:28:43 by nranna            #+#    #+#             */
/*   Updated: 2025/06/27 11:54:34 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int		ft_exec_command(char **argv, int i, char **envp);
int		cd(char **argv, int i);
int		ft_error(char *err, char *arg);
void	set_pipe(int has_pipe, int *fd, int end);

int	main(int argc, char **argv, char **envp)
{
	int	i;
	(void)argc;

	i = 1;
	while (argv[i])
	{
		argv += i;
		i = 0;
		while (argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
			i++;
		if (i)
			ft_exec_command(argv, i, envp);
		i = i + (argv[i] != NULL);
	}
	return (0);
}

int	ft_exec_command(char **argv, int i, char **envp)
{
	int	pid;
	int	fd[2];
	int has_pipe;

	if (argv[i] && strcmp(argv[i], "|") == 0)
		has_pipe = 1;
	else
		has_pipe = 0;	
	if (!has_pipe && !strcmp(*argv,  "cd"))
		return (cd(argv, i));
	if (has_pipe && pipe(fd) == -1)
	{
		ft_error("error: fatal", 0);
		exit(1);
	}
	pid = fork();
	if (!pid)
	{
		argv[i] = 0;
		set_pipe(has_pipe, fd, 1);
		execve(*argv, argv, envp);
		ft_error("error: cannot execute ", *argv);
		exit(1);
	}
	waitpid(pid, NULL, 0);
	set_pipe(has_pipe, fd, 0);
	return (0);
}

int	cd(char **argv, int i)
{
	if (i != 2)
		return (ft_error("error: cd: bad arguments", 0), 1);
	if (chdir(argv[1]) == -1)
		return (ft_error("error: cd: cannot change directory to ", argv[1]), 1);
	return (0);
}

void	set_pipe(int has_pipe, int *fd, int end)
{
	if (has_pipe && (dup2(fd[end], end) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
	{
		ft_error("error: fatal\n", 0);
		exit(1);
	}
}

int		ft_error(char *err, char *arg)
{
	while (*err)
		write(2, err++, 1);
	if (arg)
	{
		while (*arg)
			write(2, arg++, 1);
	}
	write(2, "\n", 1);
	return (1);
}
