/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:23:52 by lzaengel          #+#    #+#             */
/*   Updated: 2024/09/17 22:49:02 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>

class	Contact
{
	private:
		std::string fname;
		std::string lname;
		std::string nick;
		std::string phone;
		std::string dsecret;

	public:
		Contact (void);
		~Contact (void);
		
		void	SetName(std::string);
		void	SetLastName(std::string);
		void	SetNickname(std::string);
		void	SetPhoneNumber(std::string);
		void	SetDarkestSecret(std::string);
		std::string	GetName(void) const;
		std::string	GetLastName(void) const;
		std::string	GetNickname(void) const;
		std::string	GetPhoneNumber(void) const;
		std::string	GetDarkestSecret(void) const;
	
};

#endif