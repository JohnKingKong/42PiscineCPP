/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classConverter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:29:25 by aguay             #+#    #+#             */
/*   Updated: 2022/08/30 11:16:42 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string.h>

class	Converter
{
	public:
		Converter(std::string);
		Converter(Converter const & rhs);
		~Converter(void);

		Converter &	operator=(Converter const & rhs);
		std::string	getStrValue(void) const;
		char		toChar(void) const;
		int			toInt(void) const;
		float		toFloat(void) const;
		double		toDouble(void) const;

	private:
		std::string	_strValue;


		Converter(void);
};