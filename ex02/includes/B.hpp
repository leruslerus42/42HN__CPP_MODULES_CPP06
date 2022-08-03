/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:59:46 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/03 21:06:31 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
#include "Base.hpp"

class B :public Base
{
	private:
		/*private members*/
	public:
		B(void);
		virtual ~B(void);
		B(const B &copy);

		B	&operator = (const B &copy);
};

#endif
