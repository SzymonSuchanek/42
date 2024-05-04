#include <unistd.h>
int ft_istabspace(char c)
{
	if (c == ' ' || (c > 8 && c < 12))
		return 1;
	return 0;
}
void ft_putstr(char *str)
{
	while (ft_istabspace(str[0]))
		str++;
	while (*str)
	{
		write(1, &str[0], 1);
		str++;
	}
}
void rostring (char *str)
{
	static int i = 0;
	while(str[i])
	{
		if(!ft_istabspace(str[i]) && ft_istabspace(str[i + 1]) && str[i + 1])
		{
			ft_putstr(&str[i + 1]);
			str[i + 1] = '\0';
			break ;
		}
		i++;
	}
	ft_putstr(str);
}


int	main(int argc, char *argv[])
{
	if (argc < 2)
		write(1, "\n", 1);
	else if (argv[1])
		rostring(argv[1]);
	return (0);
}


// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>