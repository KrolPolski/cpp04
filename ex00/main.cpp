/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:19:49 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 13:35:34 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		std::cout << "\033[31mExecuting generic Animal tests:\033[0m\n" << std::endl;
		Animal anon;
		Animal ferrett("Ferrett");
		Animal ferrettcopy(ferrett);
		Animal assign;
		
		assign = ferrett;
		anon.makeSound();
		ferrett.makeSound();
		ferrettcopy.makeSound();
		assign.makeSound();
	}
	{
		std::cout << "\n\033[31mExecuting Dog tests:\033[0m\n" << std::endl;
		Dog anon;
		Dog Spot("Spot");
		Dog anon_copy(anon);
		Dog assign;
	
		assign = Spot;
		anon.makeSound();
		Spot.makeSound();
		anon_copy.makeSound();
		assign.makeSound();
	}
	{
		std::cout << "\n\033[31mExecuting Cat tests:\033[0m\n" << std::endl;
		Cat anon;
		Cat Boo("Boo");
		Cat anon_copy(anon);
		Cat assign;

		assign = Boo;
		anon.makeSound();
		Boo.makeSound();
		anon_copy.makeSound();
		assign.makeSound();	
	}
	{
		std::cout << "\n\033[31mExecuting tests from subject:\033[0m\n" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();	
	}
	{
		std::cout << "\n\033[31mExecuting WrongAnimal tests:\033[0m\n" << std::endl;
		WrongCat Garfield;
		WrongCat Callisto("Cally");
		WrongCat Norman(Garfield);
		WrongCat anon;
		
		anon = Garfield;
		std::cout << "Garfield type: " <<  Garfield.getType() << std::endl;
		Garfield.makeSound();
		std::cout << "Callisto type: " <<  Callisto.getType() << std::endl;
		Callisto.makeSound();
		std::cout << "Norman type: " <<  Norman.getType() << std::endl;
		Norman.makeSound();
		std::cout << "anon type: " <<  anon.getType() << std::endl;
		anon.makeSound();
	}
	std::cout << "\n\033[31mDon't forget to tip your evaluator!\033[0m\n" << std::endl;	
	return 0;
}