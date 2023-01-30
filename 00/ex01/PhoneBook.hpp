/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:45:52 by humartin          #+#    #+#             */
/*   Updated: 2023/01/09 13:23:49 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include "Contact.hpp"

class PhoneBook{

	private:
	Contact	m_list[8];
	int		m_nbContact;
	int		m_flag;
	int		m_len;

	public:
	PhoneBook();
	void introduction() const;
	void addContact();
	void showContact() const;
};

#endif
