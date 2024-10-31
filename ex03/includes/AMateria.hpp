/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:01:21 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 17:34:05 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
class ICharacter;
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(const std::string& type);
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);
		virtual ~AMateria();
		const std::string& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};