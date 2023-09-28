#include <iostream>
#include "Array.hpp"

int main( void ) {
	Array<double>	testDouble;

	Array<int>		testInt1( 10 );
	Array<int>		testInt2( 5 );

	for ( unsigned int i = 0; i < testInt1.size(); i++ ) {
		testInt1[i] = i;
	}

	testInt2 = testInt1;

	for ( unsigned int i = 0; i < testInt1.size(); i++ ) {
		testInt1[i] = i * 2;
		std::cout << "On testInt1: " << testInt1[i];
		std::cout << " and on testInt2: " << testInt2[i] << std::endl;
	}

		Array<int>	lastTest( testInt2 );

	try {
		std::cout << "Accessing a valid index: " << lastTest[3] << std::endl;
		std::cout << "Accessing an invalid index: " << lastTest[42] << std::endl;
	} catch ( Array<int>::OutOfBoundsException& e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return( 0 );
}