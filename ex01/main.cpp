/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:09:14 by adrian            #+#    #+#             */
/*   Updated: 2025/02/17 17:28:13 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp1(7);
        sp1.addNumber(10);
        sp1.addNumber(13);
        sp1.addNumber(30);
        std::cout << "sp1 - Shortest Span: " << sp1.shortestSpan() << std::endl;
        std::cout << "sp1 - Longest Span: " << sp1.longestSpan() << std::endl;
        Span sp2(sp1);
        std::cout << "sp2 (copiado de sp1) - Shortest Span: " << sp2.shortestSpan() << std::endl;
        Span sp3(10);
        sp3 = sp1;
        std::cout << "sp3 (asignado de sp1) - Shortest Span: " << sp3.shortestSpan() << std::endl;
        sp3.addNumber(12);
        std::cout << "sp3 - Shortest Span: " << sp3.shortestSpan() << std::endl;
        std::vector<int> range;
        for (int i = 2; i <= 13; i++)
            range.push_back(i);
        sp1.addRange(range.begin(), range.end());
        
        
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return(0);
}