/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:00:33 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 20:11:59 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"

int main(void)
{
	{
		std::cout << "\n\033[31mFiring up the Mako Reactor\033[0m\n" << std::endl;	
		MateriaSource	MakoReactor;
		Ice				*ice1 = new Ice();
		Cure			*cure1 = new Cure();

		MakoReactor.learnMateria(ice1);
		MakoReactor.learnMateria(cure1);
		MakoReactor.learnMateria(ice1);
		MakoReactor.learnMateria(cure1);
		MakoReactor.learnMateria(ice1);
		delete ice1;
		delete cure1;

		std::cout << "\n\033[31mManufacturing new materia from the Reactor\033[0m\n" << std::endl;
		Ice *newIce1 = (Ice *)MakoReactor.createMateria("ice");	
		AMateria *Shiva = MakoReactor.createMateria("Shiva");
		Shiva = nullptr; // silences compiler warnings of unused variable;
		delete newIce1;
	}
	{
		std::cout << "\n\033[31mBasic Character Tests: Bill and Ted vs the Man with no Name\033[0m\n" << std::endl;	
		AMateria	*ice1 = new Ice();
		Cure 		*cure1 = new Cure();
		Character	anon;
		Character	Ted("Ted");
		Character	Bill("Bill");

		Ice			comp1;
		Ice			comp2;
		
		std::cout << "Testing assignment operator: ";
		comp1 = comp2;
		comp1.use(anon);
		
		AMateria	*clone1 = ice1->clone();
		AMateria	*clone2 = cure1->clone();
		AMateria	*clone3 = cure1->clone();
		std::cout << "\n\033[31mTime to equip materia until we run out of room in our pockets\033[0m\n" << std::endl;
		anon.equip(ice1);
		anon.equip(cure1);
		anon.equip(clone1);
		anon.equip(clone2);
		anon.equip(clone3);
		std::cout << "\n\033[31mTime to unequip materia and test invalid indexes\033[0m\n" << std::endl;
		anon.unequip(0);
		anon.unequip(1);
		anon.unequip(2);
		anon.unequip(3);
		anon.unequip(4);
		//five materia on the floor now
		anon.unequip(-1);
		std::cout << "\n\033[31mTime to equip materia that was previously equipped by TheManWithNoName, the fight is on\033[0m\n" << std::endl;
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
	std::cout << "\n\033[31mNow for the subject tests:\033[0m\n" << std::endl;	
	}

	{
		IMateriaSource* src = new MateriaSource();
		Ice *ptr = new Ice();
		src->learnMateria(ptr);
		delete ptr;
		Cure *ptr2 = new Cure();
		src->learnMateria(ptr2);
		delete ptr2;
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		std::cout << "\n\033[31mDon't forget to tip your evaluator!\033[0m\n" << std::endl;	
	}
}