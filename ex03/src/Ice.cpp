/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:13:35 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 19:16:45 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice()
{
	type = "ice";
}

Ice::Ice(const Ice& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
}

Ice& Ice::operator=(const Ice& other)
{
	void(other.type);
	return (*this);
}

Ice::~Ice()
{
}

Ice* Ice::clone() const 
{
	Ice *ptr = new Ice(*this);
	std::cout << "An ice materia was cloned" << std::endl;
	return ptr;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}