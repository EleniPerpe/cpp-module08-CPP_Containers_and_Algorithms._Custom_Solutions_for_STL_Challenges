/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleni <eleni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:05:58 by eleni             #+#    #+#             */
/*   Updated: 2025/01/21 19:37:16 by eleni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <random>

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, 1000);

        Span largeSpanRan(10000);
        Span largeSpan(10000);
        for (int i = 0; i < 10000; ++i) {
            largeSpanRan.addNumber(dis(gen));
            //std::cout << largeSpanRan.getNumber(i) << " ";
            //if (!(i % 30))
            //    std::cout << std::endl;
            largeSpan.addNumber(i * 2);    
        }
        std::cout << std::endl;
        std::cout << "Shortest Random Span : " << largeSpanRan.shortestSpan() << std::endl;
        std::cout << "Longest Random Span : " << largeSpanRan.longestSpan() << std::endl;
        std::cout << "Shortest Span : " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span : " << largeSpan.longestSpan() << std::endl;

        Span sp2(10);

        std::vector<int> numbers = {1, 2, 3, 4, 5};
        sp2.addNumbers(numbers.begin(), numbers.end());

        std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp2.longestSpan() << std::endl;
        
        std::vector<int> moreNumbers = {16, 17, 18};
        sp2.addNumbers(moreNumbers.begin(), moreNumbers.end());

        std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp2.longestSpan() << std::endl;

        std::vector<int> exceedingNumbers = {9, 10, 11};
        sp2.addNumbers(exceedingNumbers.begin(), exceedingNumbers.end());

        std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp2.longestSpan() << std::endl;
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }    

    return 0;
}