/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:59:57 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/03 21:01:54 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include <iostream>
#include "Base.hpp"

class C : public Base
{
	private:
		/*private members*/
	public:
		C(void);
		~C(void);
		C(const C &copy);

		C	&operator = (const C &copy);
};

#endif
