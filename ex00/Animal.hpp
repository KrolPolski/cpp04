/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:07:59 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 13:49:20 by rboudwin         ###   ########.fr       */
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
	void virtual makeSound() const;
	std::string getType() const;
	void setType(std::string newType);
	virtual ~Animal();
};


