/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:59:26 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/04 23:32:59 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base::Base(void)
{
	this->_i = 0;
	std::cout << "Constructor of Base called" << std::endl;
}

Base::~Base(void)
{
	std::cout << "Destructor of Base called" << std::endl;
}

Base::Base(const Base &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Base	&Base::operator = (const Base &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

Base 	*Base::generate()
{
	srand(time(NULL));
	int random_num = rand() % 3 + 1;
	this->_i = random_num;
	switch (random_num)
	{
		case (1):
		{
			A* a = new A();
			Base *base = dynamic_cast<Base *> (a);
			return (base);
		}
		case (2):
		{
			B* b = new B();
			Base *base = dynamic_cast<Base *> (b);
			return (base);
		}
		case (3):
		{
			C* c = new C();
			Base *base = dynamic_cast<Base *> (c);
			return (base);
		}
	}
	return (NULL);
}

void	Base::identify(Base *p)
{
	std::cout << "The actual type is: " ;
	switch (p->_i)
	{
		case(1):
			std::cout << "A" << std::endl;
			break;
		case(2):
			std::cout << "B" << std::endl;
			break;
		case(3):
			std::cout << "C" << std::endl;
	}
}

void	Base::identify(Base &p)
{
	std::cout << "The actual type is: " ;
	switch (p._i)
	{
		case(1):
			std::cout << "A" << std::endl;
			break;
		case(2):
			std::cout << "B" << std::endl;
			break;
		case(3):
			std::cout << "C" << std::endl;
	}
}