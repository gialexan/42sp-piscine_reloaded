/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:10:03 by gialexan          #+#    #+#             */
/*   Updated: 2022/05/27 22:18:18 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	char	*c;
	int		i;
	int		j;

	i = 1;
	while (i < argc -1)
	{
		j = 0;
		while (argv[i][j] == argv[i + 1][j])
			j++;
		if (argv[i][j] > argv[i + 1][j])
		{
			c = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = c;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
