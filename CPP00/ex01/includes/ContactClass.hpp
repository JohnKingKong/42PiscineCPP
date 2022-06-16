/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:16:19 by aguay             #+#    #+#             */
/*   Updated: 2022/06/16 12:04:09 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string.h>
#include <iostream>

class Contact
{
	public:

		//	Constructor and destructor
		Contact(std::string FN, std::string LN, std::string NN, std::string PN, std::string DS);
		~Contact(void);

		//	GetFunction
		std::string		getFirstName(void) const;
		std::string		getLastName(void) const;
		std::string		getNickName(void) const;
		std::string		getPhoneNumber(void) const;
		std::string		getDarkSecret(void) const;

		//	SetFunction
		void			setFirstName(std::string FN);
		void			setLastName(std::string LN);
		void			setNickName(std::string NN);
		void			setPhoneNumber(std::string PN);
		void			setDarkSecret(std::string DS);

	private:
		std::string		_FirstName;
		std::string		_LastName;
		std::string		_NickName;
		std::string		_PhoneNumber;
		std::string		_DarkSecret;
};
