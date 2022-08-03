/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 02:14:38 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/01 23:20:43 by rrajaobe         ###   ########.fr       */
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

static bool isNumber(const std::string& s)
{
	for (char const &c:s){
		if (std::isdigit(c) == 0 && c != '.') return false;
	}
	return true;
}
void conversion::check_arg()
{
	const char *s = this->_arg.c_str();//string to const char *s
	
	if (this->_arg.length() == 1)
		setChar();
	if (isNumber(s))
	{
		if (this->_arg[-1] == 'f')
			setFloat();
		else if (strchr(s, '.'))
		{
			setDouble();
		}
		else
		{
			try {
				this->_i = std::stoi(this->_arg);
			}
			catch (std::invalid_argument const &e)
			{
				std::cerr << "Invalid argument!";
				exit(EXIT_FAILURE);
			}
		}
	}
	// try {
	// 	std::stoi(this->_arg);//int
	// 	try {
	// 		double d = stod(this->_arg);//double
	// 		this->_type = 2;
	// 		try{				
	// 			float f = stof(this->_arg);//float
	// 			this->_type = 3;			
	// 		}
	// 		catch(std::invalid_argument()){
	// 		this->_type = 2;
	// 		}
	// 	}
	// 	catch(std::invalid_argument()){
	// 		this->_type = 1;
	// 	}
	// }
	// catch (std::invalid_argument())
	// {
	// 	char c = this->_arg[0];
	// 	this->_type = 4;
	// }
	//setType();
	printer();


}

// void conversion::setType()
// {
// 	switch (this->_type)
// 	{
// 		//case 1: setInt();
// 		// case 2: setDouble();
// 		 case 3: setFloat();
// 		// case 4: setChar();
// 	}
// 	std::cout << "TYPE IS: " << this->_type << std::endl;
// }

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
	//if (this->_f % 2 == 0)
	//	this->_f = this->_f
	this->_i = static_cast<int>(this->_f);
	this->_d = static_cast<double>(this->_f);
	
	this->_c = static_cast<char>(this->_i);
}

void conversion::setDouble()
{
	try {
		this->_d = std::stod(this->_arg);
	}
	catch (std::invalid_argument const &e)
	{
		std::cerr << "Invalid argument!";
		exit(EXIT_FAILURE);
	}
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
	this->_f = static_cast<float>(this->_i);
	this->_d = static_cast<double>(this->_i);
}

