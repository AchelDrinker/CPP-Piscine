/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:45:46 by humartin          #+#    #+#             */
/*   Updated: 2023/01/09 13:23:39 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_list(), m_nbContact(0)
{

}

void PhoneBook::introduction() const
{
	std::cout << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "|     Welcome to your PHONEBOOK !      |" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::endl ;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "|              --COMMANDS--            |" << std::endl;
	std::cout << "|                                      |" << std::endl;
	std::cout << "| ADD : add a new contact for your     |" << std::endl;
	std::cout << "|       phonebook !                    |" << std::endl;
	std::cout << "|                                      |" << std::endl;
	std::cout << "|                                      |" << std::endl;
	std::cout << "| SEARCH : show the contact you        |" << std::endl;
	std::cout << "|          added !                     |" << std::endl;
	std::cout << "|                                      |" << std::endl;
	std::cout << "| Exit : leave the program but         |" << std::endl;
	std::cout << "|         loose all your contact !     |" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}

void PhoneBook::addContact()
{
	int i(0);

	if (m_nbContact > 7)
		m_nbContact = 0;
	i = m_nbContact;
	m_flag = 1;
	if (m_len == 8)
		m_list[i].clear();
	m_list[i].addFirstName();
	m_list[i].addLastName();
	m_list[i].addNickName();
	m_list[i].addPhoneNumber();
	m_list[i].addDarkSecret();
	m_nbContact++;
	m_len++;
	if (m_len > 8)
		m_len = 8;
}

void PhoneBook::showContact() const
{
	if (m_flag == 0)
		std::cout << "Repertory is empty !" << std::endl;
	else
	{
		for (int i(0); i < 4; i++)
			std::cout << "-----------";
		std::cout << "\n";
		std::cout << "|     INDEX|";
		std::cout << "FIRST_NAME|";
		std::cout << " LAST_NAME|";
		std::cout << "  NICKNAME|" << std::endl;
		for (int i(0); i < 4; i++)
			std::cout << "-----------";
		std::cout << "\n";
		for (int i(0); i < m_len; i++)
		{
			std::cout << "|         ";
			std::cout << i + 1 << "|";
			m_list[i].showFirstName();
			std::cout << "|";
			m_list[i].showLastName();
			std::cout << "|";
			m_list[i].showNickName();
			std::cout << "|" << std::endl;
			for (int i(0); i < 4; i++)
				std::cout << "-----------";
			std::cout << "\n";
		}

		int index(0);

		while (index != 9)
		{
			std::string res;
			std::cout << "Enter the number of index to show all informations in the contact !" << std::endl;
			std::cout << " Enter [9] for exit : ";
			getline(std::cin, res);
			if (isdigit(res[0]) && res.length() == 1)
			{
				index = stoi(res);
				if (index > 0 && index <= m_len)
					m_list[index - 1].showAll();
				else if (index == 9)
					return ;
				else
					std::cout << "ERROR Index is too high or too low !" << std::endl;
			}
			else
				std::cout << "ERROR with the index , Please retry !" << std::endl;
		}
	}
}
