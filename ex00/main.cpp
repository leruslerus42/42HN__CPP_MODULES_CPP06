/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 02:13:45 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/04 23:36:13 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/conversion.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
		std::cerr << "Invalid argument!";
		exit(EXIT_FAILURE);
    }
    
    std::string arg = argv[1];
    
    conversion input(arg);
    input.check_arg();
     
    return (0);
}

/* TESTS
	char: 
		a                           ok 
		A                           ok
		digit                       ok

    float:
        -42.42f                     ok(*)
        -0                          ok                 
        --24.24f                    ok
        - 100.00                    ok(d)
    double:
        -42.42                    ok(*)
        -0                          ok
        --42.42                   ok
        - 100.00                    ok(d)
    int:
        -digit                      ok
        -42                         ok(*)
        -0                          ok      
        --42                        ok
        - 100.00                    ok(d)
    

*/