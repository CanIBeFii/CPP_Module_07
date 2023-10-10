#include "../includes/Iter.hpp"

// My tests

int	main( void ) {
	{
		int	array[] = { 1, 2, 3, 4, 5 };

		iter<int>(array, 5, &print);
	}
	{
		std::cout << std::endl;
		char	array[] = { 'o', 'l', 'a', ' ', 'a', 'm', 'i', 'g', 'o', 's' };
		iter<char>( array, 10, &print );
	}
}

// Subject tests

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }