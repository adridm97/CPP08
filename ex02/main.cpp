/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:54:08 by adrian            #+#    #+#             */
/*   Updated: 2025/02/17 19:03:34 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

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
    return(0);
}