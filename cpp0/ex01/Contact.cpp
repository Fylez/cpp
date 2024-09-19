/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:21:14 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/19 20:02:32 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
	return;
}

Contact::~Contact( void )
{
	return;
}

void Contact::SetName(std::string input)
{
	this->fname = input;
}

void Contact::SetLastName(std::string input)
{
	this->lname = input;
}

void Contact::SetNickname(std::string input)
{
	this->nick = input;
}

void Contact::SetPhoneNumber(std::string input)
{
	this->phone = input;
}

void Contact::SetDarkestSecret(std::string input)
{
	this->dsecret = input;
}

std::string Contact::GetName(void) const
{
	return(this->fname);
}

std::string Contact::GetLastName(void) const
{
	return(this->lname);
}

std::string Contact::GetNickname(void) const
{
	return(this->nick);
}

std::string Contact::GetPhoneNumber(void) const
{
	return(this->phone);
}

std::string Contact::GetDarkestSecret(void) const
{
	return(this->dsecret);
}
