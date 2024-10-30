/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:29:42 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 15:27:08 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(std::string CatType);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		std::string getIdea(int i);
		void setIdea(std::string str, int i);
		void virtual makeSound() const override;
		~Cat();
};
