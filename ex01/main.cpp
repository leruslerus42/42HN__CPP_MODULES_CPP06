/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:54:02 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/03 20:54:04 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data{
	int	a;
	float	b;
	char	c;
};

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);}

int main()
{
	Data data;

	std::cout << &data << std::endl;
	std::cout << serialize(&data) << std::endl;
	std::cout << deserialize(serialize(&data)) << std::endl;
	return 0;
}
