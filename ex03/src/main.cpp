/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:00:33 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 18:16:23 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"


int main(void)
{
	AMateria	*ice1 = new Ice();
	Cure 		*cure1 = new Cure();
	Character	anon;
	Character	Ted("Ted");
	Character	Bill("Bill");

	AMateria	*clone1 = ice1->clone();
	AMateria	*clone2 = cure1->clone();
	AMateria	*clone3 = cure1->clone();
	std::cout << "Time to equip materia until we run out of room in our pockets" << std::endl;
	anon.equip(ice1);
	anon.equip(cure1);
	anon.equip(clone1);
	anon.equip(clone2);
	anon.equip(clone3);
	anon.unequip(0);
	anon.unequip(1);
	anon.unequip(2);
	anon.unequip(3);
	anon.unequip(4);
	//five materia on the floor now
	anon.unequip(-1);
	Ted.equip(ice1);
	Ted.equip(cure1);
	Ted.use(0, anon);
	Ted.unequip(0);
	Bill.equip(ice1);
	anon.equip(clone1);
	anon.equip(clone2);
	anon.use(0, Bill);
	anon.use(1, anon);
	Bill.use(0, anon);
	Ted.use(1, Bill);
	// ice1 is destroyed when Bill is destroyed;
	// clone1 and clone2 are destroyed when anon is destroyed;
	// cure1 is destroyed when Ted is destroyed;
	delete clone3;
}