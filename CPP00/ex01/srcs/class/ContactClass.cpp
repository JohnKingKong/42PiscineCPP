/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:17:40 by aguay             #+#    #+#             */
/*   Updated: 2022/06/16 12:04:44 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

//	Constructor
Contact::Contact(std::string FN, std::string LN, std::string NN, std::string PN, std::string DS)
{
	Contact::setFirstName(FN);
	Contact::setLastName(LN);
	Contact::setNickName(NN);
	Contact::setPhoneNumber(PN);
	Contact::setDarkSecret(DS);
	return;
}

//	Deconstructor
Contact::~Contact(void)
{
	std::cout << "Contact : " << this->_FirstName << ' ' << this->_LastName;
	std::cout << ' ' << "Destroyed" << std::endl;
	return ;
}

// Get methods
std::string Contact::getFirstName(void) const
{
	return (this->_FirstName);
}

std::string Contact::getLastName(void) const
{
	return (this->_LastName);
}

std::string Contact::getNickName(void) const
{
	return (this->_NickName);
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->_PhoneNumber);
}

std::string Contact::getDarkSecret(void) const
{
	return (this->_DarkSecret);
}

//	Set methods
void	Contact::setFirstName(std::string FN)
{
	this->_FirstName = FN;
	return;
}

void	Contact::setLastName(std::string LN)
{
	this->_LastName = LN;
	return;
}

void	Contact::setNickName(std::string NN)
{
	this->_NickName = NN;
	return;
}

void	Contact::setPhoneNumber(std::string PN)
{
	this->_PhoneNumber = PN;
	return;
}

void	Contact::setDarkSecret(std::string DS)
{
	this->_DarkSecret = DS;
	return;
}
