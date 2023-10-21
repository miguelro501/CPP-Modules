#include "Iter.hpp"

void factorial(int const &n) 
{
	int fact = 1;
	for (int i = 0; i < n; i++)
		fact *= n - i;
    std::cout << fact << " ";
}

void print(std::string const &s) 
{
    std::cout << s << " ";
}

int main(void) 
{
    int array[] = {4, 2, 3};
    ::iter(array, 3 , factorial);
	std::cout << "\n";

    std::string str[] = {"I", "Hate", "MINISHELL"};
    ::iter(str, 3, print);
	std::cout << "\n";
}

/* class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
} */