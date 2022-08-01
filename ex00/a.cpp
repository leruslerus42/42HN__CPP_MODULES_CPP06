/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 05:42:50 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/01 06:05:03 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main()
{
    /*int*/
    // int a = 2;

    // float b = a;
    // double c =  b;
    // char d = c;

    /*float*/
    // float a = 2.0f;

    // double b = a;
    // int c = b;
    // char d = c;
    
    /*char*/
    // char a = 'c';

    // int b = a;
    // float c = b;
    // double d = b;

    /*double*/
    long a = 22.22;
    
    float b = a;
    int c = b;
    char d = c;
    std::cout << std::fixed << std::setprecision(2)<< a << std::endl;
    std::cout << std::fixed << std::setprecision(2) << b << std::endl;
    std::cout << std::fixed << std::setprecision(2) << c << std::endl;
    std::cout << std::fixed << std::setprecision(2) << d << std::endl;

    return (0);
}