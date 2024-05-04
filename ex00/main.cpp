#include "Whatever.hpp"


int main()
{
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	Whatever::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << Whatever::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << Whatever::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	Whatever::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << Whatever::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << Whatever::max( c, d ) << std::endl;

	return (0);
}
