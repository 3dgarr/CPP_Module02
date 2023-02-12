#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		float	toFloat()				const ;
		int		toInt()					const ;
		int		getRawBits() 			const ;
		void	setRawBits(const int) ;


	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const	Fixed &);
		Fixed&	operator=(const Fixed &);
		~Fixed();
		
	private:
		int					value;
		static const int	fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &, const Fixed &);
