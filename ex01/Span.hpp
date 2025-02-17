/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:33:38 by adrian            #+#    #+#             */
/*   Updated: 2025/02/14 16:19:01 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    private:
        unsigned int N;
        std::vector<int> _numbers;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();
        class FullSpanException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class NotEnoughNumbersException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        template <typename Iterator>
        void addRange(Iterator begin, Iterator end)
        {
            if (std::distance(begin, end) > static_cast<int>(N - _numbers.size()))
                throw FullSpanException();
            _numbers.insert(_numbers.end(),begin, end);
        }
};