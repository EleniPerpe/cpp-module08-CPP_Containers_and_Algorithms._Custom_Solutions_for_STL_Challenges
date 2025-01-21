/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleni <eleni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:36:30 by eleni             #+#    #+#             */
/*   Updated: 2025/01/21 16:02:34 by eleni            ###   ########.fr       */
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

int Span::shortestSpan()
{
    if (_intVector.size() < 2)
        throw noNumbersException();

    std::vector<int> sorted = _intVector;
    std::sort(sorted.begin(), sorted.end());

    int min = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sorted.size(); i++)
    {
        int span = sorted[i] - sorted[i - 1];
        min = std::min(span, min);
    }

    return min;
}

int Span::longestSpan()
{
    if (_intVector.size() < 2)
        throw noNumbersException();
        
    std::vector<int> sorted = _intVector;
    std::sort(sorted.begin(), sorted.end());
    
    return (sorted.back() - sorted.front());
}

const char* Span::maxCapacityException::what() const throw()
{
    return "Exception : No space for more numbers";
}

const char* Span::noNumbersException::what() const throw()
{
    return "Exception : Not enough numbers to span";
}
