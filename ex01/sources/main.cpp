#include "Iter.hpp"

int	main( void ) {
	{
		int	array[] = { 1, 2, 3, 4, 5 };

		iter<int>(array, 5, &print);
	}
	{
		char	array[] = { 'o', 'l', 'a', ' ', 'a', 'm', 'i', 'g', 'o', 's' };
		iter<char>( array, 10, &print );
	}
}