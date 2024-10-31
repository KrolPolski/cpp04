/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:37:46 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 20:07:40 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = nullptr;
 	}
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (other.inventory[i] != nullptr)
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = nullptr;
 	}
}
	
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (other.inventory[i] != nullptr)
				inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = nullptr;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
		{
			delete inventory[i];
			inventory[i] = nullptr;
		}
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i] == nullptr)
		{
			inventory[i] = m->clone();
			std::cout << "A materia was learned in slot " << i << " on a MateriaSource" << std::endl;
			return ;
		}
	}
	std::cout << "This MateriaSource is full." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			if (inventory[i]->getType() == type)
			{
				std::cout << "Creating a new materia from the copy in the MateriaSource" << std::endl;
				return(inventory[i]->clone());
			}
		}
	}
	std::cout << type << " does not exist in this MateriaSource" << std::endl;
	return (0);
}