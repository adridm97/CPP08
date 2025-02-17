/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:25:55 by adrian            #+#    #+#             */
/*   Updated: 2025/02/10 19:05:33 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>

class NotFoundException : public std::exception
{
    public:
        const char *what() const throw()
        {
            return("Error: Element not found.");
        }
};

template <typename T>
typename T::iterator easyfind(T &container, int val)
{
    typename T::iterator it = std::find(container.begin(), container.end(), val);
    if (it == container.end())
        throw NotFoundException();
    return(it);
}