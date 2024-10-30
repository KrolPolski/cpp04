/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:53:13 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/30 15:12:00 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brain winks into existence." << std::endl;
}

Brain::Brain(const Brain& other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	std::cout << "A brain has been copied." << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	std::cout << "A brain has had a copy assignment." << std::endl;	
	return *this;
}

std::string Brain::getIdeas(unsigned int i) const
{
	return ideas[i];
}

void Brain::setIdeas(std::string str, unsigned int i)
{
	ideas[i] = str;
}

Brain::~Brain()
{
	std::cout << "A brain has been melted away" << std::endl;
}