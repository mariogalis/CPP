/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:08:55 by codespace         #+#    #+#             */
/*   Updated: 2023/11/26 09:05:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class TestClass
{
	public:
	
	TestClass( int n ) : _n( n ) {}

	bool operator==( TestClass const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( TestClass const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( TestClass const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( TestClass const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( TestClass const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( TestClass const & rhs ) const { return (this->_n <= rhs._n); }

	int	getN(void) const { return (this->_n); }
	
	private:
	
	int _n;
};

std::ostream &operator<<(std::ostream &out, const TestClass &aw) { out << aw.getN(); return(out); }

int main( void ) 
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
    return 0;
}

/*
int	main(void)
{
	{
		int		a = 0;
		int		b = 1;
		
		float	c = 2.0f;
		float	d = 3.0f;

		char	e = 'a';
		char	f = 'b';
		
		TestClass	aw(4);
		TestClass	aw2(5);

		std::cout<< YELLOW << "Before swap: " << a << " " << b << RESET << std::endl;
		swap<int>(a,b);
		std::cout << "After swap: " << a << " " << b << std::endl;
		std::cout << "Min is: " << min<int>(a, b) << std::endl;
		std::cout << "Max is: " << max<int>(a, b) << std::endl;
		std::cout << std::endl;
		std::cout << YELLOW << "Before swap: " << c << " " << d << RESET << std::endl;
		swap<float>(c,d);
		std::cout << "After swap: " << c << " " << d << std::endl;
		std::cout << "Min is: " << min<float>(c, d) << std::endl;
		std::cout << "Max is: " << max<float>(c, d) << std::endl;
		std::cout << std::endl;
		std::cout << YELLOW << "Before swap: " << e << " " << f << RESET << std::endl;
		swap<char>(e,f);
		std::cout << "After swap: " << e << " " << f << std::endl;
		std::cout << "Min is: " << min<char>(e, f) << std::endl;
		std::cout << "Max is: " << max<char>(e, f) << std::endl;
		std::cout << std::endl;
	}
}*/