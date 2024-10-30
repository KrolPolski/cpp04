/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:27:48 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 13:17:10 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Amoeba";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string WrongAnimalType)
{
	type = WrongAnimalType;
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	if (this != &other)
    {
        type = other.type;
    }
    std::cout << "WrongAnimal copy constructor called on " << this->type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
    {
        type = other.type;
    }
    std::cout << "WrongAnimal copy assignment constructor called on " << this->type << std::endl;
    return (*this);
}

std::string WrongAnimal::getType() const
{
	return type;	
}

void WrongAnimal::setType(std::string newType)
{
	type = newType;		
}

void WrongAnimal::makeSound() const
{
	std::cout << type << " makes the wrong sound." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called on " << this->type << std::endl;
}

	
