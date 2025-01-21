/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleni <eleni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:36:34 by eleni             #+#    #+#             */
/*   Updated: 2025/01/21 15:23:33 by eleni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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
        void shortestSpan();
        void longestSpan();

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