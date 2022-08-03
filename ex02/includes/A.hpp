/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:59:40 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/03 21:02:29 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

class A : public Base
{
	private:
		/*private members*/
	public:
		A(void);
		~A(void);
		A(const A &copy);

		A	&operator = (const A &copy);
};

#endif
