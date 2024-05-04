#ifndef ITER_H
# define ITER_H

# include <iostream>

class Iter {

	private :

	public :
		Iter( void );
		Iter( Iter &i );
		~Iter( void );
		Iter &operator=( Iter &i );

		template <typename T>
		static void	iter(T *array, size_t len, void (*f)(T))
		{
			for (size_t i = 0; i < len; i++)
				f(array[i]);
			return ;
		}

};

#endif
