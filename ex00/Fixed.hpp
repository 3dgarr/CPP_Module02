#pragma once
#include <iostream>

class Fixed
{
	public:
		int		getRawBits() const ;
		void	setRawBits(const int) ;

	public:
		Fixed();
		Fixed(const	Fixed &);
		Fixed&	operator=(const Fixed &);
		~Fixed();
		
	private:
		int					value;
		static const int	fractionalBits = 8;
};
