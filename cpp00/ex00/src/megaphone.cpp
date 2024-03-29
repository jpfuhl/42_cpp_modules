#include <iostream>
#include <cstring>

static void	print_uppercase(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
		std::cout << (char)toupper(str[i]);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOAD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
			print_uppercase(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}
