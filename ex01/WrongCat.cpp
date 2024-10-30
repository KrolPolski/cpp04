/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:33:56 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 13:22:47 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
	
}

WrongCat::WrongCat(std::string WrongCatType)
{
	WrongCatType = "WrongCat";
	type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	if (this != &other)
    {
        type = other.type;
    }
    std::cout << "WrongCat copy constructor called on " << this->type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
    {
        type = other.type;
    }
    std::cout << "WrongCat copy assignment constructor called on " << this->type << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "The WrongCat wails like a banshee." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}