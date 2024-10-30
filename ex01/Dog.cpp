/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:33:56 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 15:39:14 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(std::string DogType)
{
	DogType = "Dog";
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called on " << this->type << std::endl;
	if (this != &other)
    {
        type = other.type;
		brain = new Brain(*other.brain);
    }
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment constructor called on " << this->type << std::endl;
	if (this != &other)
    {
        type = other.type;
		brain = new Brain(*other.brain);
    }
    return (*this);
}

std::string Dog::getIdea(int i)
{
	return brain->getIdeas(i);
}

void Dog::setIdea(std::string str, int i)
{
	brain->setIdeas(str, i);
}

void Dog::makeSound() const
{
	std::cout << "The dog barks." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete(brain);
	
}