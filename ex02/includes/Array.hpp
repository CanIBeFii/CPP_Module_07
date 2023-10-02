#ifndef ARRAY_HPP
#define ARRAY_HPP

// Colors
#define RESET   "\033[0m"
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */

template <typename T>
class Array {
	public:
		// Constructors
		Array( void ) : _array( new T() ), _size( 0 ) {
			std::cout << BOLDCYAN << "Array: " << RESET;
			std::cout << BOLDYELLOW << "Default " << BOLDGREEN << "Constructor " << RESET;
			std::cout << "called" << std::endl;
		}

		Array( unsigned int n ) : _array( new T[n]() ), _size( n ) {
			std::cout << BOLDCYAN << "ScalarConverter: " << RESET;
			std::cout << BOLDYELLOW << "Type " << BOLDGREEN << "Constructor " << RESET;
			std::cout << "called" << std::endl;
		}

		Array( const Array& copy ) : _array( new T[ copy.size() ]() ), _size( copy.size() ) {
			std::cout << BOLDCYAN << "ScalarConverter: " << RESET;
			std::cout << BOLDYELLOW << "Copy " << BOLDGREEN << "Constructor " << RESET;
			std::cout << "called" << std::endl;

			for ( unsigned int i = 0; i < _size; i++ ) {
				_array[i] = copy[i];
			}
		}

		// Destructors
		~Array( void ) {
			std::cout << BOLDCYAN << "ScalarConverter: " << RESET;
			std::cout << BOLDRED << "Destructor " << RESET;
			std::cout << "called" << std::endl;

			if ( _array ) {
				if ( _size == 0)
					delete _array;
				else
					delete [] _array;
			}
		}

		// Operators
		Array&			operator=( const Array& copy ) {
			if ( this != &copy ) {
				if ( _array ) {
					delete [] _array;
				}
				unsigned int size = copy.size();

				_array = new T[size];

				for ( unsigned int i = 0; i < size; i++ ) {
					_array[i] = copy._array[i];
				}

				_size = size;
			}
			return ( *this );
		}

		T&				operator[]( unsigned int index ) const {
			if ( _size < index + 1 ) {
				throw OutOfBoundsException();
			}
			return ( _array[index] );
		}

		// Methods
		unsigned int	size( void ) const {
			return ( _size );
		}

		class OutOfBoundsException : public std::exception {
			public:
				virtual const char*	what( void ) const throw() {
					return ( "Given index was out of bounds!" );
				}
		};
	
	private:
		T*				_array;
		unsigned int	_size;
};

#endif