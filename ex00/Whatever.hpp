#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>
# include <exception>


class Whatever {

	private:

	public:
		Whatever( void );
		Whatever( Whatever &w );
		~Whatever( void );
		Whatever &operator=( Whatever &w );

		template<typename T>
		static T	min(T &a, T &b) {
    		
			return (a < b ? a : b);
		}

		template<typename T>
		static void	swap(T &a, T &b) {

			T c = a;
			a = b;
			b = c;
			return ;
		}

		template<typename T>
		static T	max(T &a, T &b) {
    		
			return (a < b ? b : a);
		}
};

#endif
