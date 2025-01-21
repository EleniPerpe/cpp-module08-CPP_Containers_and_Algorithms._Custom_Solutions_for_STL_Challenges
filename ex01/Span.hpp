/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleni <eleni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:36:34 by eleni             #+#    #+#             */
/*   Updated: 2025/01/21 15:54:32 by eleni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <stdexcept>

class Span
{
    private:
        unsigned int _maximumIntegers;
        std::vector<int> _intVector;
        
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& copy);
        Span& operator=(const Span& copy);
        ~Span();

        void addNumber(int num);
        int shortestSpan();
        int longestSpan();

        class maxCapacityException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class noNumbersException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};