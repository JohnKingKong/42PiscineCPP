/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:16:24 by aguay             #+#    #+#             */
/*   Updated: 2022/06/16 14:23:07 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ContactClass.hpp"

class PhoneBookClass
{
	public:

		PhoneBookClass(void);
		~PhoneBookClass(void);

		static int	getNbInst(void);
		static int	getIndex(void);
		void		addContact(Contact *cont);

	private:

		Contact	_reperoire[8];
		static size_t	_nbInst;
		static int		_index;
};
