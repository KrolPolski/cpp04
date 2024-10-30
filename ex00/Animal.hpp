/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:07:59 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 11:45:15 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
public:
	Animal();
	Animal(std::string animalType);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	void virtual makeSound();
	std::string getType();
	void setType(std::string newType);
	~Animal();
};


