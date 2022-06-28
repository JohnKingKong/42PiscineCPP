/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classFixed.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:07:28 by aguay             #+#    #+#             */
/*   Updated: 2022/06/28 13:49:55 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classFixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	Fixed::setRawBits(0);
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::Fixed(int const entier)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(entier << bitFract);
}

Fixed::Fixed(float const nbVirgule)
{
	//	roundf(Float * 256)
	setRawBits((int)roundf(nbVirgule * (float)(1 << bitFract)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Operator overload assignation called" << std::endl;
	Fixed::setRawBits(rhs.getRawBits());

	return *this;
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	std::cout << "Operator overload addition called with ";
	std::cout << Fixed::toFloat() << " and " << rhs.toFloat() << std::endl;

	return (Fixed(Fixed::toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	std::cout << "Operator overload substraction called with ";
	std::cout << Fixed::toFloat() << " and " << rhs.toFloat() << std::endl;

	return (Fixed(Fixed::toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	std::cout << "Operator overload multiplication called with ";
	std::cout << Fixed::toFloat() << " and " << rhs.toFloat() << std::endl;

	return (Fixed(Fixed::toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	std::cout << "Operator overload division called with ";
	std::cout << Fixed::toFloat() << " and " << rhs.toFloat() << std::endl;

	return (Fixed(Fixed::toFloat() / rhs.toFloat()));
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	std::cout << "Operator overload boolean algebra > with ";
	std::cout << Fixed::toFloat() << " and " << rhs.toFloat() << std::endl;
	return (Fixed::toFloat() > rhs.toFloat());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	std::cout << "Operator overload boolean algebra >= with ";
	std::cout << Fixed::toFloat() << " and " << rhs.toFloat() << std::endl;
	return (Fixed::toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	std::cout << "Operator overload boolean algebra < with ";
	std::cout << Fixed::toFloat() << " and " << rhs.toFloat() << std::endl;
	return (Fixed::toFloat() < rhs.toFloat());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	std::cout << "Operator overload boolean algebra <= with ";
	std::cout << Fixed::toFloat() << " and " << rhs.toFloat() << std::endl;
	return (Fixed::toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	std::cout << "Operator overload boolean algebra == with ";
	std::cout << Fixed::toFloat() << " and " << rhs.toFloat() << std::endl;
	return (Fixed::toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	std::cout << "Operator overload boolean algebra != with ";
	std::cout << Fixed::toFloat() << " and " << rhs.toFloat() << std::endl;
	return (Fixed::toFloat() != rhs.toFloat());
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
	return ;
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)Fixed::getRawBits() / (1 << bitFract));
}

int	Fixed::toInt(void) const
{
	return (Fixed::getRawBits() >> bitFract);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed &	Fixed::min(Fixed const &fixA, Fixed const &fixB)
{
	Fixed	refRetour;

	if (fixA < fixB)
		refRetour = fixA;
	else
		refRetour = fixB;
	return (refRetour);
}

Fixed &	Fixed::min(Fixed &fixA, Fixed &fixB)
{
	if (fixA < fixB)
		return (fixA);
	else
		return (fixB);
}

Fixed &	Fixed::max(Fixed const &fixA, Fixed const &fixB)
{
	Fixed	refRetour;

	if (fixA > fixB)
		refRetour = fixA;
	else
		refRetour = fixB;
	return (refRetour);
}

Fixed &	Fixed::max(Fixed &fixA, Fixed &fixB)
{
	if (fixA > fixB)
		return (fixA);
	else
		return (fixB);
}

Fixed &	Fixed::operator++()
{
	
}

Fixed &	Fixed::operator++(int)
{
	
}

Fixed &	Fixed::operator--()
{
	
}

Fixed &	Fixed::operator--()
{
	
}