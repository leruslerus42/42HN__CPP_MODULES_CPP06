/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 02:13:45 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/01 12:36:25 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/conversion.hpp"

/*problem bei check_arg, will never go to char*/

int main(int argc, char **argv)
{
    std::string arg;
    // char *cstr = new char[arg.length() + 1];
    
    // std::getline(std::cin, arg);
    // std::cin.clear();
    // std::strcpy(cstr, arg.c_str());
    if (argc != 2)
    {
        std::cout << "Incorrect number of inputs!";
        return (0);
    }
    arg = argv[1];  
    // char *cstr = new char[arg.length() + 1];
    // std::strcpy(cstr, arg.c_str());
    
    conversion input(arg);
    input.check_arg();



     
    // a.setInt();
    // a.setFloat();
    // a.setDouble();
    // a.setChar();
     
    return (0);
}