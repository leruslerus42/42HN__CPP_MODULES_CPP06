/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:59:33 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/03 21:19:06 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/C.hpp"

C::C(void)
{
	std::cout << "Constructor of C called" << std::endl;
}

C::~C(void)
{
	std::cout << "Destructor of C called" << std::endl;
}

C::C(const C &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

C	&C::operator = (const C &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
