/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:20:26 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 19:33:28 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
private:
	AMateria 	*inventory[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource&);
	MateriaSource& operator=(const MateriaSource&);
	~MateriaSource();
	virtual void learnMateria(AMateria* m) override; 
	virtual AMateria* createMateria(std::string const & type) override;
};

