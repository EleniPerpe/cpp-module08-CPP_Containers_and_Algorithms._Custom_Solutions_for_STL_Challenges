/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleni <eleni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:03:45 by eleni             #+#    #+#             */
/*   Updated: 2025/01/21 14:33:54 by eleni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <array>

int main()
{
    try 
    {
        std::list<int> lst = {10, 20, 30, 40, 50};
        std::vector<int> vec = {1, 2, 3, 4, 5};
        std::array<int, 5> arr = {10, 20, 3, 45, 58};


        std::cout << "Found: " << easyfind(lst, 40) << std::endl;
        //std::cout << "Found: " << easyfind(lst, 45) << std::endl;
        //std::cout << "Found: " << easyfind(vec, 8) << std::endl;
        std::cout << "Found: " << easyfind(vec, 3) << std::endl;
      	std::cout << "Found: " << easyfind(arr, 20) << std::endl;
        std::cout << "Found: " << easyfind(arr, 23) << std::endl;
    }
    
    catch (const NotFoundException& e) 
    {
        std::cerr << e.what() << std::endl;
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
    }
    
    return 0;
}
