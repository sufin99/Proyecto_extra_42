#include <iostream>
#include <cstdio>

int	main(int argc, char *argv[])	
{
	if (argc == 2)
	{
		int i;

		i = std::atoi(argv[1]);
		if (i == 1)
			std::printf("42\n");
		else if (i == 2)
		{
			std::cout << "*****\n";
			std::cout << "* *\n";
			std::cout << "* * *\n";
			std::cout << "* *\n";
			std::cout << "*****\n";
		}
		else if (i == 3)
		{
			std::cout << "*********\n";
			std::cout << "* *\n";
			std::cout << "* ***** *\n";
			std::cout << "* * * *\n";
			std::cout << "* * * * *\n";
			std::cout << "* * * *\n";
			std::cout << "* ***** *\n";
			std::cout << "* *\n";
			std::cout << "*********\n";
		}
		else if (i == 4)
		{
			std::cout << "*************\n";
			std::cout << "* *\n";
			std::cout << "* ********* *\n";
			std::cout << "* * * *\n";
			std::cout << "* * ***** * *\n";
			std::cout << "* * * * * *\n";
			std::cout << "* * * * * * *\n";
			std::cout << "* * * * * *\n";
			std::cout << "* * ***** * *\n";
			std::cout << "* * * *\n";
			std::cout << "* ********* *\n";
			std::cout << "* *\n";
			std::cout << "*************\n";
		}
		else
			std::printf("Sólo me habéis pedido imprimir los 4 primeros números :p\n");
	}
	return 0;
}