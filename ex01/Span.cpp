/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleni <eleni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:36:30 by eleni             #+#    #+#             */
/*   Updated: 2025/01/21 15:33:44 by eleni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : _maximumIntegers(N) {}

Span::Span(const Span& copy)
{
    this->_maximumIntegers = copy._maximumIntegers;
    this->_intVector = copy._intVector;
}

Span& Span::operator=(const Span& copy)
{
    if (this == &copy)
        return *this;
    this->_maximumIntegers = copy._maximumIntegers;
    this->_intVector = copy._intVector;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int num)
{
    if (this->_maximumIntegers == this->_intVector.size())
        throw maxCapacityException();
    _intVector.push_back(num);
}

void Span::shortestSpan()
{
    
}

const char* Span::maxCapacityException::what() const throw()
{
    return "Exception : No space for more numbers";
}

const char* Span::noNumbersException::what() const throw()
{
    return "Exception : Not enough numbers to span";
}
