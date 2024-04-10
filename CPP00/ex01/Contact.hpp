/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:08:19 by mario             #+#    #+#             */
/*   Updated: 2023/05/16 12:46:17 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;

public:
	Contact(void);
	~Contact(void);
	bool     create(void);
	bool    checkempty(void);  
	void    contactlist(void);
	void    print(void);

};

#endif