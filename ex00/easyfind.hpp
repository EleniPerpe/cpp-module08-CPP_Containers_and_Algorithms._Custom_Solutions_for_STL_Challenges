/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleni <eleni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:35:40 by eleni             #+#    #+#             */
/*   Updated: 2025/01/21 11:13:31 by eleni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class NotFoundException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return "Exception : Number was not found";
        }
};

template <typename T>
int easyfind(T container, int toFind)
{
    auto it = std::find(container.begin(), container.end(), toFind);
    
    if (it == container.end())
    {
        throw NotFoundException();
    }

    return *it;

}
