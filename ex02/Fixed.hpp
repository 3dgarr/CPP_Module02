#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		friend bool operator<(const Fixed&, const Fixed&);
		friend bool operator>(const Fixed&, const Fixed&);
		friend bool operator<=(const Fixed&, const Fixed&);
		friend bool operator>=(const Fixed&, const Fixed&);
		friend bool operator==(const Fixed&, const Fixed&);
		friend bool operator!=(const Fixed&, const Fixed&);

		friend Fixed operator+(const Fixed& , const Fixed&);
		friend Fixed operator-(const Fixed& , const Fixed&);
		friend Fixed operator*(const Fixed& , const Fixed&);
		friend Fixed operator/(const Fixed& , const Fixed&);

		const static Fixed &min(const Fixed &, const Fixed &);
		const static Fixed &max(const Fixed &, const Fixed &);

		static Fixed &min(Fixed &, Fixed &);
		static Fixed &max(Fixed &, Fixed &);

		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

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
