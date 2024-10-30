/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:27:48 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 18:20:59 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Amoeba";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string animalType)
{
	type = animalType;
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	if (this != &other)
    {
        type = other.type;
    }
    std::cout << "Animal copy constructor called on " << this->type << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
    {
        type = other.type;
    }
    std::cout << "Animal copy assignment constructor called on " << this->type << std::endl;
    return (*this);
}

std::string Animal::getType() const
{
	return type;	
}

void Animal::setType(std::string newType)
{
	type = newType;		
}

void Animal::makeSound() const
{
}

Animal::~Animal()
{
	std::cout << "Animal destructor called on " << this->type << std::endl;
}

	
