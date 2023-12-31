#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter( T* array, size_t size, void (*f)( const T& ) ) {
	if ( !array ) {
		return ;
	}
	for ( size_t i = 0; i < size; i++ ) {
		f( array[i] );
	}
}

template<typename T>
void	print( const T& var ) {
	std::cout << var << std::endl;
}
#endif