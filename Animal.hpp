/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:07:59 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/29 18:28:16 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal
{
	protected:
		std::string type;
public:
	Animal();
	Animal(std::string animalType);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	~Animal();
};


