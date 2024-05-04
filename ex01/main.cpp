#include "Iter.hpp"
#include <cstring>

template<typename T>
void	func(T c)
{
	std::cout << c << " ";
	return ;
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int nb = atoi(av[1]);
		int i;
		std::cout << "\nprinting char array:" << std::endl;
		char 		*str = strdup("hello i am under da water");
		if (nb > strlen(str))
			i = strlen(str);
		else if (nb < 0)
			i = 0;
		else
			i = nb;
		Iter::iter(str, i, func);
		std::cout << "\n" << std::endl;
		free(str);


		std::cout << "printing int array:" << std::endl;
		int			iarr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		if (nb > 10)
			i = 10;
		else if (nb < 0)
			i = 0;
		else
			i = nb;
		Iter::iter(iarr, i, func);
		std::cout << "\n" << std::endl;

		std::cout << "printing double array:" << std::endl;
		double			darr[10] = {7.2, 4.6, 9.2, 1.7, 46.4, 5.5, 78.12, 6.9, 8.9, 6.4};
		Iter::iter(darr, i, func);
		std::cout << "\n" << std::endl;
	}
	else
		std::cout << "Launch with number of iteration on array:   ./Iter [nb]" << std::endl;
	return (0);
}
