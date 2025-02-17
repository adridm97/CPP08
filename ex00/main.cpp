/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:55:43 by adrian            #+#    #+#             */
/*   Updated: 2025/02/10 19:06:53 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> v;
        for (int i = 0; i < 10; i++)
            v.push_back(i * 2);
        std::cout << "Buscando el numero 6... " << std::endl;
        std::vector<int>::iterator iter = easyfind(v, 6);
        std::cout << "Encontrado en la posición: " << std::distance(v.begin(), iter) << std::endl;
        std::cout << "Buscando el numero 15... " << std::endl;
        iter = easyfind(v, 15);
        std::cout << "Encontrado en la posición: " << std::distance(v.begin(), iter) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}