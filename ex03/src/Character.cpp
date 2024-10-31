/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:39:58 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 17:33:09 by rboudwin         ###   ########.fr       */
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
/*
Character::Character(const Character& other)
{
	
}

Character& Character::operator=(const Character& other)
{
	
}
*/
Character::~Character()
{

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
			std::cout << "A materia was equipped in slot i on " << this->getName() << std::endl;
			return ;
		}
	}
	std::cout << "inventory of " << this->getName() << " is full." << std::endl;
}

void Character::unequip(int idx)
{
	inventory[idx] = nullptr;
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

