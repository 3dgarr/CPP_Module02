#include "./Fixed.hpp"

int		Fixed::getRawBits() const 
{
	return (value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed::Fixed()
	:value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	value = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this == &rhs)
		return (*this);
	// *this = rhs;
	this->value = rhs.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

///////////////////////////////////////////////////////////

std::ostream &operator<<(std::ostream &stream, const Fixed &object)
{
	std::cout << object.toFloat();
	return (stream);
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	value = number * (1 << fractionalBits); 	
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	value = static_cast<int>(roundf(number * (1 << fractionalBits))); 	
}

int		Fixed::toInt() const
{
	return (static_cast<int>(value >> fractionalBits));
}

float	Fixed::toFloat() const
{
	return ((static_cast<float>(value) / static_cast<float>(1 << fractionalBits)));
}

