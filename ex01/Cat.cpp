/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:33:56 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 15:40:35 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(std::string CatType)
{
	std::cout << "Cat constructor called" << std::endl;
	CatType = "Cat";
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& other)
{
	if (this != &other)
    {
        type = other.type;
		brain = new Brain(*other.brain);
    }
    std::cout << "Cat copy constructor called on " << this->type << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
    {
        type = other.type;
		brain = new Brain(*other.brain);
    }
    std::cout << "Cat copy assignment constructor called on " << this->type << std::endl;
    return (*this);
}

std::string Cat::getIdea(int i)
{
	return brain->getIdeas(i);
}

void Cat::setIdea(std::string str, int i)
{
	brain->setIdeas(str, i);
}

void Cat::makeSound() const
{
	std::cout << "The Cat meows." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete(brain);
}