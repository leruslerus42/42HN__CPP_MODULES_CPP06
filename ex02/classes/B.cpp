/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:59:21 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/03 21:18:59 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/B.hpp"

B::B(void)
{
	std::cout << "Constructor of B called" << std::endl;
}

B::~B(void)
{
	std::cout << "Destructor of B called" << std::endl;
}

B::B(const B &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

B	&B::operator = (const B &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
