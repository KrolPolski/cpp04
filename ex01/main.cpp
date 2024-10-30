/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:19:49 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 15:34:56 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		std::cout << "\n\033[31mIncluded subject test:\033[0m\n" << std::endl;	
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << "\n\033[31mTesting spawning and destroying puppies and kittens:\033[0m\n" << std::endl;	
		Animal *zoo[10];
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << "Spawning one puppy at zoo[" << i << "]" << std::endl;
			zoo[i] = new Dog();
			
		}
		for (size_t i = 5; i < 10; i++)
		{
			std::cout << "Spawning one kitten at zoo[" << i << "]" << std::endl;
			zoo[i] = new Cat();
		}
		for (size_t i = 0; i < 10; i++)
		{
			std::cout << "Destroying one " << zoo[i]->getType() << " you monster!" << std::endl;
			delete zoo[i];
		}
	}
	{
		std::cout << "\n\033[31mDeep Copy test:\033[0m\n" << std::endl;	
		
		Dog Legion;
		 
		Legion.setIdea("light the world on fire", 0);
		std::cout << "Legion's first idea is to " << Legion.getIdea(0) << std::endl;
		
		Dog Levi(Legion);
		
		std::cout << "Levi's copied his idea from Legion, it is to: " << Levi.getIdea(0) << std::endl;
		Levi.setIdea("put the fire out", 0);
		std::cout << "Levi changed his mind, his new idea is to: " << Levi.getIdea(0) << std::endl;
		std::cout << "But Legion's still wants to: " << Legion.getIdea(0) << " \nbecause this was a deep copy" << std::endl;
	}
	
	std::cout << "\n\033[31mDon't forget to tip your evaluator!\033[0m\n" << std::endl;	
	return 0;
}