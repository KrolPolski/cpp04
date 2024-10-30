/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:29:42 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 11:33:42 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : Animal
{
private:
	/* data */
public:
	Dog();
	Dog(std::string DogType);
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	void virtual makeSound() override;
	~Dog();
};
