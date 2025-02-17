/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:57:34 by adrian            #+#    #+#             */
/*   Updated: 2025/02/17 17:57:35 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {}
Span::Span(unsigned int n) : N(n) {}
Span::Span(const Span& other) : N(other.N), _numbers(other._numbers) {}
Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        N = other.N;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {}

const char* Span::FullSpanException::what() const throw()
{
    return("Error: No se pueden agregar más números, el Span está lleno.");
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
    return("Error: No hay suficientes números para calcular un span.");
}

void Span::addNumber(int num)
{
    if (_numbers.size() >= N)
        throw FullSpanException();
    _numbers.push_back(num);
}

int Span::shortestSpan()
{
    if (_numbers.size() < 2)
        throw NotEnoughNumbersException();
    std::vector<int> sortedNumbers = _numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    int minSpan = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 1; i < sortedNumbers.size() - 1; i++)
        minSpan = std::min(minSpan, sortedNumbers[i + 1] - sortedNumbers[i]);
    return(minSpan);
}

int Span::longestSpan()
{
    if (_numbers.size() < 2)
        throw NotEnoughNumbersException();
    int minVal = *std::min_element(_numbers.begin(), _numbers.end());
    int maxVal = *std::max_element(_numbers.begin(), _numbers.end());
    return(maxVal - minVal);
}