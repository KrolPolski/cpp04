/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:33:56 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 13:14:43 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	
}

Cat::Cat(std::string CatType)
{
	CatType = "Cat";
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	if (this != &other)
    {
        type = other.type;
    }
    std::cout << "Cat copy constructor called on " << this->type << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
    {
        type = other.type;
    }
    std::cout << "Cat copy assignment constructor called on " << this->type << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
	std::cout << "The Cat meows." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}