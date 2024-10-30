/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:29:42 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 15:26:37 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(std::string DogType);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		std::string getIdea(int i);
		void setIdea(std::string str, int i);
		void virtual makeSound() const override;
		~Dog();
};
