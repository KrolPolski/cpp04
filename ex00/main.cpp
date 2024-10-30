/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:19:49 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 11:47:54 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

int main(void)
{
	{
		std::cout << "\033[31mExecuting generic Animal tests\033[0m\n" << std::endl;
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
		std::cout << "\n\033[31mExecuting Cat and Dog tests\033[0m\n" << std::endl;
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
}