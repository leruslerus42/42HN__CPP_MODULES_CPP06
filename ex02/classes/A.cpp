/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:59:13 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/03 21:18:50 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/A.hpp"

A::A(void)
{
	std::cout << "Constructor of A called" << std::endl;
}

A::~A(void)
{
	std::cout << "Destructor of A called" << std::endl;
}

A::A(const A &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

A	&A::operator = (const A &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
