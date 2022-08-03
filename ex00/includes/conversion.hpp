/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 02:14:44 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/01 23:17:18 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <cctype>


class conversion
{
	private:
		/*private members*/
		std::string	_arg;
		float	_f;
		double	_d;
		int		_i;
		char	_c;
		int		_type;

	public:
		conversion(void);
		conversion(std::string arg);
		~conversion(void);
		conversion(const conversion &copy);

		void	check_arg();
		//void	setType();
		void	printer();
		
		void	setFloat();
		void	setDouble();
		void	setInt();
		void	setChar();
		
		void	decimal_edge_case(char label);

		conversion	&operator = (const conversion &copy);

};

static bool isNumber(const std::string& s);

#endif
