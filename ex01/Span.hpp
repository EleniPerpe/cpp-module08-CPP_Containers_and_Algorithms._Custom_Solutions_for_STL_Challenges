/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleni <eleni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:36:34 by eleni             #+#    #+#             */
/*   Updated: 2025/01/21 19:37:00 by eleni            ###   ########.fr       */
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

        int getNumber(int i);

        template <typename InputIterator>
        void addNumbers(InputIterator begin, InputIterator end) 
        {
            size_t distance = std::distance(begin, end);

            if (_intVector.size() + distance > _maximumIntegers) {
                throw maxCapacityException();
        }

         _intVector.insert(_intVector.end(), begin, end);
        }
        
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