/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:59:52 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/03 22:55:38 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class A;
class B;
class C;

class Base
{
	private:
		int _i;

	public:
		Base(void);
		virtual ~Base(void);
		Base(const Base &copy);

		Base	&operator = (const Base &copy);
		
		Base 	*generate(void);
		void	identify(Base *p);
		void	identify(Base &p);
};

#endif
