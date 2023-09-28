#include "whatever.hpp"

int	main( void ) {
	{
		char	a = 'a';
		char	b = 'b';

		std::cout << max<char>( a, b ) << std::endl;
		std::cout << min<char>( a, b ) << std::endl;
		
		swap<char>( a, b );

		std::cout << "a: " << a << " b: " << b << std::endl;
	}
	{
		int	num1 = 24;
		int	num2 = 42;

		std::cout << max<int>( num1, num2 ) << std::endl;
		std::cout << min<int>( num1, num2 ) << std::endl;
		
		swap<int>( num1, num2 );

		std::cout << "num1: " << num1 << " num2: " << num2 << std::endl;
	}
}