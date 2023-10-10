#include "../includes/whatever.hpp"

int	main( void ) {
	{
		char	a = 'a';
		char	b = 'b';

		std::cout << max<char>( a, b ) << std::endl;
		std::cout << min<char>( a, b ) << std::endl;
		
		swap<char>( a, b );

		std::cout << "a: " << a << "  b: " << b << std::endl << std::endl;
	}
	{
		int	num1 = 24;
		int	num2 = 42;

		std::cout << max<int>( num1, num2 ) << std::endl;
		std::cout << min<int>( num1, num2 ) << std::endl;
		
		swap<int>( num1, num2 );

		std::cout << "num1: " << num1 << "  num2: " << num2 << std::endl;
	}
	{
		float	f1 = 42.0f;
		float	f2 = 42.42f;

		std::cout << max<float>( f1, f2 ) << std::endl;
		std::cout << min<float>( f1, f2 ) << std::endl;

		swap<float>( f1, f2 );

		std::cout << "f1: " << f1 << " f2: " << f2 << std::endl;
	}
}
