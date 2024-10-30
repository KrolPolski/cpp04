/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:07:59 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 13:13:28 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string WrongAnimalType);
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
	void virtual makeSound() const;
	std::string getType() const;
	void setType(std::string newType);
	~WrongAnimal();
};


