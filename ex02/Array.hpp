#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <exception>

template<typename T>
class Array {

	private :
		T		*_elem;
		size_t	_size;

	public :
		// Default Constructor
		Array( void ) : _size(0){
			_elem = new T[0]; 
			return ;
		}

		// Sized constructor
		Array( unsigned int n ) : _size(n)
		{
			_elem = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_elem[i] = 0;
			return ;
		}

		// Copy constructor
		Array( Array &a ) : _size(a.size())
		{
			_elem = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_elem[i] = a[i];
			return ;
		}

		// Destructor
		~Array( void )
		{
			delete[] _elem;
			return ;
		}

		// '[]' Operator overloading
		T	&operator[](size_t index)
		{
			if (index >= _size)
				throw(Array::OutOfBoundsException());
			return (_elem[index]);
		}

		// '=' Operator overloading
		Array	&operator=(Array &a)
		{
			delete [] _elem;
			_size = a.size();
			_elem = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_elem[i] = a[i];
			return (*this);
		}	

		// Member function
		size_t	size( void ) const
		{
			return (_size);
		}

		class OutOfBoundsException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Invalid index []: OutOfBoundsException");
			}
		};

};

#endif