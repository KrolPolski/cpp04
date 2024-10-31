/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:39:58 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 19:55:33 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(/* args */)
{
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
	_name  = "TheManWithNoName";
}

Character::Character(std::string name)
{
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = nullptr;
	}
	_name  = name;
}

Character::Character(const Character& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for (size_t i = 0; i < 4; i++)
		{
			if (other.inventory[i] != nullptr)
				this->inventory[i] = other.inventory[i]->clone();
			else
				this->inventory[i] = nullptr;
		}
	}
}

Character& Character::operator=(const Character& other)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] != nullptr)
		{
			delete this->inventory[i];	
			this->inventory[i] = nullptr;
		}
	}
	
	if (this != &other)
	{
		this->_name = other._name;
		for (size_t i = 0; i < 4; i++)
		{
			if (other.inventory[i] != nullptr)
				this->inventory[i] = other.inventory[i]->clone();
			else
				this->inventory[i] = nullptr;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] != nullptr)
		{
			delete this->inventory[i];
			this->inventory[i] = nullptr;
		}
	}
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i] == nullptr)
		{
			inventory[i] = m;
			std::cout << "A materia was equipped in slot " << i << " on " << this->getName() << std::endl;
			return ;
		}
	}
	std::cout << "inventory of " << this->getName() << " is full." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Nice try, you don't have that many pockets" << std::endl;
		return ;
	}
	if (inventory[idx] != nullptr)
	{
		inventory[idx] = nullptr;
		std::cout << "A materia was unequipped in slot " << idx << " on " << this->getName() << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != nullptr)
	{
		inventory[idx]->use(target);
		return ;
	}
	std::cout << "No materia equipped in slot " << idx << " on " << this->getName();
}

