#include <iostream>
#include "Array.hpp"

int main()
{

	try
	{
		std::cout << "\nConstructing Array with template as char: (size 10, filled with 'a')" << std::endl;
		Array<char> a(10);
		for (int i = 0; i < 10; i++)
			a[i] = 'a';
		for (int i = 0; i < 10; i++)
			std::cout << a[i];
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}



	try
	{
		std::cout << "\nConstructing Array with template as int: (size 10, filled with index as value)" << std::endl;
		Array<int> a(10);
		for (int i = 0; i < 10; i++)
			a[i] = i;
		for (int i = 0; i < 10; i++)
			std::cout << a[i];
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}



	try
	{
		std::cout << "\nConstructing Array with template as float: (size 10, filled with floating point values)" << std::endl;
		Array<float> a(10);
		for (float i = 0; i < 10; i++)
			a[i] = (1 + i / 10 + i / 9);
		for (int i = 0; i < 10; i++)
			std::cout << a[i] << " - ";
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}



	try
	{
		std::cout << "\nConstructing default Array:" << std::endl;
		Array<char> a;
		std::cout << "(it's empty so nothing happens but i swear it works)" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << std::endl << e.what() << std::endl;

	}


	try
	{
		std::cout << "\nTrying 'out of range' exception with [] operator overload:";
		Array<int> a(5);
		for (int i = 0; i < 10; i++)
			a[i] = i;
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}



	try
	{
		std::cout << "\nTrying to copy an array with = operator overload:\n";
		// Base array "a"
		Array<char> a(10);
		for (int i = 0; i < 10; i++)
			a[i] = i + 'a';
		Array<char> b;
		std::cout << "size " << b.size() << " array b contains: ";
		for (int i = 0; i < b.size(); i++)
			std::cout << b[i];
		std::cout << "\nsize " << a.size() << " array a contains: ";
		for (int i = 0; i < 10; i++)
			std::cout << a[i];
		// Array 'b' copied from 'a'
		b = a;
		std::cout << "\nsize " << b.size() << " array b now contains: ";
		for (int i = 0; i < 10; i++)
			std::cout << b[i];
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}



	try
	{
		std::cout << "\nTrying copy constructor:\n";
		// Base array "a"
		Array<char> a(10);
		for (int i = 0; i < 10; i++)
			a[i] = i + 'a';
		std::cout << "size " << a.size() << " array a contains: ";
		for (int i = 0; i < 10; i++)
			std::cout << a[i];
		// Array 'b' copied from 'a'
		Array<char> b(a);
		std::cout << "\nsize " << b.size() << " array b now contains: ";
		for (int i = 0; i < 10; i++)
			std::cout << b[i];
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	return (0);
}