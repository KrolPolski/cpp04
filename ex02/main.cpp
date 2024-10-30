/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:19:49 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 17:46:00 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		//This won't work because it is an abstract class
		//Animal Crow;
		//But this does
		Dog Levi;
		Cat Callisto;

		Levi.makeSound();
		Callisto.makeSound();
	}	
}