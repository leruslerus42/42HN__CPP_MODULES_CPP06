/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:00:14 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/04 23:33:58 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  VIRTUAL DESTRUCTOR
Should be used by polymorphically instancies.
For example by instanciating a derived class from a Base class, 
and deleting the obj through a pointer of Base class -> undefined behaviour ;
*/
#include "./includes/A.hpp"
#include "./includes/B.hpp"
#include "./includes/C.hpp"
/*
1) identify(*p): this->_i setted to 0, but got also a linking problem if I set it static
2) identify(&p): error in main, not recognized
*/
int main()
{
	Base *base = new Base();
	(*base).generate();

	(*base).identify(base);
	std::cout << "---------------------------" << std::endl;
	(*base).identify(*base);


	delete base;
	return 0;
}