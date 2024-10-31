/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:22:49 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 16:41:49 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class Character : ICharacter
{
private:
	AMateria 	*inventory[4];
	std::string	_name;
public:
	Character();
	Character(std::string name);
	Character(const Character&);
	Character& operator=(const Character&);
	~Character();
	std::string const & getName() const override;
	void equip(AMateria* m) override;
	void unequip(int idx);
	void use(int idx, ICharacter& target) override;
};

