/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:45:31 by humartin          #+#    #+#             */
/*   Updated: 2023/01/06 12:45:33 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CONTACT
#define DEF_CONTACT

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickName;
	std::string m_phoneNumber;
	std::string m_darkSecret;

	public:
	Contact();
	void addFirstName();
	void addLastName();
	void addNickName();
	void addPhoneNumber();
	void addDarkSecret();
	void showFirstName() const;
	void showLastName() const;
	void showNickName() const;
	void showAll() const;
	void clear();
};

#endif
