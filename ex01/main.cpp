/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleni <eleni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:05:58 by eleni             #+#    #+#             */
/*   Updated: 2025/01/21 19:07:49 by eleni            ###   ########.fr       */
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
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    

}