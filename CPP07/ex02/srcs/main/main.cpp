/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/10/14 11:18:46 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Array.hpp"

int	main(void)
{
	Array<int>      a;
    Array<float>    b(12);

    std::cout << "Float array test\n" << std::endl;
    {
        try
        {
            b.set_array(3, 12.954);
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error : " << e.what() << std::endl;
        }
        
        try
        {
            std::cout << b.get_array(3) << std::endl;
            b.set_array(1, 13612345.1234);
            std::cout << b.get_array(1) << std::endl;
            std::cout << b.get_array(2) << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error : " << e.what() << std::endl;
        }

        try
        {
            b.set_array(15, 13256);
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error : " << e.what() << std::endl;
        }
    }

    std::cout << "\nstring array test\n" << std::endl;
    {
        try
        {
            Array<std::string>  str(4);
            str.set_array(0, "yo ca va?");
            std::cout << str.get_array(0) << std::endl;
            std::cout << str.get_array(1) << std::endl;
            std::cout << str.get_array(2) << std::endl;
            str.set_array(1000, "bob");
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error : " << e.what() << std::endl;
        }
    }

    std::cout << "\ncopy constuctor test\n" << std::endl;
    {
        try
        {
            Array<std::string> a(3);
            a.set_array(0, "allo");
            a.set_array(1, "ca");
            a.set_array(2, "va");
            Array<std::string> b = a;
            std::cout << b.get_array(0) << std::endl;
            std::cout << b.get_array(0) << std::endl;
            std::cout << b.get_array(0) << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error : " << e.what() << std::endl;
        }
    }
	return (0);
}
