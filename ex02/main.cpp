/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:54:08 by adrian            #+#    #+#             */
/*   Updated: 2025/02/18 16:40:26 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> myStack;
    myStack.push(1);
    myStack.push(7);
    
    std::cout << "El valor en el Top es: " << myStack.top() << std::endl;
    std::cout << "Size: " << myStack.size() << std::endl;
    myStack.pop();
    std::cout << "Size despues de pop() : " << myStack.size() << std::endl;
    myStack.push(3);
    myStack.push(10);
    myStack.push(100);
    MutantStack<int>::iterator it = myStack.begin();
    MutantStack<int>::iterator ite = myStack.end();

    std::cout << "Elementos en MutantStack: ";
    while (it != ite)
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << std::endl;

    std::cout << "Prueba con std::list" << std::endl;
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(7);
    lst.pop_back();
    lst.push_back(3);
    lst.push_back(10);
    lst.push_back(100);
    std::list<int>::iterator lit = lst.begin();
    std::list<int>::iterator lite = lst.end();
    std::cout << "Elementos en std::list: ";
    while (lit != lite)
    {
        std::cout << " " << *lit;
        ++lit;
    }
    std::cout << std::endl;
    return(0);
}