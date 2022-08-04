/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 02:14:38 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/04 06:02:41 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/conversion.hpp"
conversion::conversion(void)
{
	std::cout << "Constructor called" << std::endl;
}

conversion::conversion(std::string arg)
{
	//std::cout << "Overloaded constructor called" << std::endl;
	this->_i = 0;
	this->_f = 0.0f;
	this->_d = 0.0;
	this->_c = '\0';
	this->_type = 0;
	this->_arg = arg;
	std::cout << "Argument is: "<< this->_arg << std::endl << std::endl;
}

conversion::~conversion(void)
{
	//std::cout << "Destructor called" << std::endl;
}

conversion::conversion(const conversion &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

conversion	&conversion::operator = (const conversion &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
void conversion::check_arg()
{
	const char *s = this->_arg.c_str();//string to const char *s
	
	if (this->_arg.length() == 1)
		((this->_arg) >= "0" && (this->_arg <= "9") ? setInt() : setChar());
	else if (this->_arg[-1] == 'f')
		setFloat();
	else if (strchr(s, '.'))
		setDouble();
	else
	{
		try {
			this->_i = std::stoi(this->_arg);
			setInt();
		}
		catch (std::invalid_argument const &e)
		{
			std::cerr << "Invalid argument!";
			exit(EXIT_FAILURE);
		}
	}
	printer();
}

void conversion::decimal_edge_case(char label)
{
	if (this->_f == this->_i && label == 'f')
		std::cout << ".0";
	else if (this->_d == this->_i && label == 'd')
		std::cout << ".0";
	
}

void conversion::printer()
{
	std::cout << "Int:	" << this->_i << std::endl;
	
	std::cout << "Float:	" << this->_f;
	decimal_edge_case('f');
	std::cout << "f" << std::endl;
	
	std::cout << "Double:	" << this->_d;
	decimal_edge_case('d');
	std::cout << std::endl;
	
	if (this->_i < 31 || this->_i > 126)
		std::cout << "Char: " << "Non displayable";
	else
		std::cout << "Char:	" << this->_c << std::endl;

}


void conversion::setFloat()
{
	
	this->_f = std::stof(this->_arg);
	this->_i = static_cast<int>(this->_f);
	this->_d = static_cast<double>(this->_f);
	this->_c = static_cast<char>(this->_i);
}

void conversion::setDouble()
{

	this->_d = std::stod(this->_arg);
	this->_f = static_cast<float>(this->_d);
	this->_i = static_cast<int>(this->_d);
	this->_c = static_cast<char>(this->_i);
}
void conversion::setInt()
{
	this->_i = std::stoi(this->_arg);
	this->_f = static_cast<float>(this->_i);
	this->_d = static_cast<double>(this->_i);
	this->_c = static_cast<char>(this->_i);
}

void conversion::setChar()
{
	this->_c = this->_arg[0];
	this->_i = static_cast<int>(this->_c);
	this->_f = static_cast<float>(this->_c);
	this->_d = static_cast<double>(this->_c);
}

