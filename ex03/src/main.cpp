/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:00:33 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/31 17:27:07 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"


int main(void)
{
	AMateria	*ice1 = new Ice();
	Cure 		cure1;
	Character	anon;
	Character	Ted("Ted");

	Ted.equip(ice1);
	delete ice1;
}