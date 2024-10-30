/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:33:56 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 11:49:13 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	
}

Dog::Dog(std::string DogType)
{
	DogType = "Dog";
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	if (this != &other)
    {
        type = other.type;
    }
    std::cout << "Dog copy constructor called on " << this->type << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
    {
        type = other.type;
    }
    std::cout << "Dog copy assignment constructor called on " << this->type << std::endl;
    return (*this);
}

void Dog::makeSound()
{
	std::cout << "The dog barks." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}