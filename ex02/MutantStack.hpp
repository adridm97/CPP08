/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:57:26 by adrian            #+#    #+#             */
/*   Updated: 2025/02/17 18:50:26 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){}
        MutantStack(const MutantStack &other) : std::stack<T>(other){}
        MutantStack &operator=(const MutantStack &other)
        {
            if (this != &other)
                std::stack<T>::operator=(other);
            return(*this);
        }
        ~MutantStack(){}
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return(this->c.begin());
        }
        iterator end()
        {
            return(this->c.end());
        }
};