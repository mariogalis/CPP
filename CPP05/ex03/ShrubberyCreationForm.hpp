/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:47:24 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/21 20:17:21 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
	public:

		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);

		void	execute(Bureaucrat const & executor) const;
		static AForm	*newShrubbery(std::string const target);
		
	private:

		ShrubberyCreationForm(void);
};

#endif
