/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/06/16 17:40:30 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"
#include "PhoneBookClass.hpp"

static void	get_info(std::string info[5])
{
	// Get the user input of the contact info
	std::cout << "First name :\t\t";
	std::getline(std::cin, info[0]);
	std::cout << "Last Name :\t\t";
	std::getline(std::cin, info[1]);
	std::cout << "Nick Name :\t\t";
	std::getline(std::cin, info[2]);
	std::cout << "Phone Number :\t\t";
	std::getline(std::cin, info[3]);
	std::cout << "Darkest Secret :\t";
	std::getline(std::cin, info[4]);
	std::cout << std::endl;
}

int	main(void)
{
	bool			appEngine = true;
	PhoneBookClass	repertoire;
	std::string		input;
	std::string		info[5];
	Contact			*contact[8];


	std::cout << "\nWelcome in my Awesome PhoneBook App!" << std::endl << std::endl;
	while (appEngine)
	{
		std::cout << "Please chose an option" << std::endl;
		std::cout << "ADD\t: Add a contact to the phone book" << std::endl;
		std::cout << "SEARCH\t: Seach for a contact" << std::endl;
		std::cout << "EXIT\t: GUESS WHAT IS DOES!?" << std::endl << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			get_info(info);
			contact[repertoire.getIndex()] = new Contact(info);
			repertoire.addContact(contact[repertoire.getIndex()]);
		}
		else if (input == "SEARCH")
			repertoire.showRepertoire();
		else if (input == "EXIT")
			appEngine = false;
	}
	return (0);
}