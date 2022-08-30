/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classConverter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:29:14 by aguay             #+#    #+#             */
/*   Updated: 2022/08/30 14:03:58 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classConverter.hpp"

Converter::Converter(void){};

Converter::Converter(std::string str) : _strValue(str){};

Converter::Converter(Converter const & rhs){*this = rhs;}

Converter::~Converter(void){};

Converter & Converter::operator=(Converter const & rhs)
{
	if (this != &rhs)
		this->_strValue = rhs.getStrValue();
	return (*this);
}

//	Version C
char	Converter::toChar(void) const
{
	int	c = 0;
	
	try
	{
		c = std::stoi (this->_strValue);
		return (c);
	}
	catch (const std::exception &e)
	{
		std::cout << "Not displayable \033[31mErr: \033[0m1";
	}
	return (1);
}


int	Converter::toInt(void) const
{
	int	i = 0;

	try
	{
		i = std::stoi (this->_strValue);
		return (i);
	}
	catch (const std::exception &e)
	{
		std::cout << "Not displayable \033[31mErr: \033[0m";
	}
	return (1);
}

float	Converter::toFloat(void) const
{
	return (0);
}

double	Converter::toDouble(void) const
{
	return (0);
}

std::string	Converter::getStrValue(void) const {return (this->_strValue);}