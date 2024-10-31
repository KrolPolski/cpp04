/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:45:50 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 17:50:53 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure()
{
	type = "Cure";
}

Cure::Cure(const Cure& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Cure::~Cure()
{
}

Cure* Cure::clone() const 
{
	Cure *ptr = new Cure(*this);
	std::cout << "A cure materia was cloned" << std::endl;
	return ptr;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}