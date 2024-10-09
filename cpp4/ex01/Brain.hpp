/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:59:00 by lzaengel          #+#    #+#             */
/*   Updated: 2024/10/08 09:21:09 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>

class Brain{

	private:
		std::string ideas[100];

		
	public:
		Brain(void);
		Brain(const Brain &src);
		Brain& operator=(const Brain &src);
		~Brain(void);
	
		std::string get_idea(unsigned int i) const;
   		void set_idea(int const i, const std::string &value);
};

#endif
