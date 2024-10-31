/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:21:43 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 19:15:40 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
	type = "Nothing";
}

AMateria::AMateria(const std::string& type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& other)
{
	if (this != &other)
		this->type = other.type;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	void(other.type);
	return (*this);
}

AMateria::~AMateria()
{
	
}

const std::string& AMateria::getType() const
{
	return this->type;
}
