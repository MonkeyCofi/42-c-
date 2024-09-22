/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:56:17 by pipolint          #+#    #+#             */
/*   Updated: 2024/09/22 18:47:51 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	Ice *pointer_test = new Ice();
	AMateria *cure = new Cure();
	Cure	*newCure = new Cure();
	Cure	*cureAgain = new Cure();
	ICharacter *Cloud = new Character("Cloud");
	ICharacter *Zack = new Character("Zack");
	ICharacter *Sephiroth = new Character("Sephiroth");
	Cloud->equip(pointer_test);
	Cloud->use(0, *Zack);
	Zack->equip(cure);
	Zack->use(0, *Cloud);
	Sephiroth->equip(cure);
	Sephiroth->equip(pointer_test);
	Sephiroth->use(1, *Cloud);
	Zack->use(0, *Cloud);
	Sephiroth->unequip(0);
	Sephiroth->use(0, *Zack);
	Sephiroth->equip(newCure);
	Sephiroth->equip(cureAgain);
	Sephiroth->equip(cure);
	Sephiroth->equip(cure);
	delete (pointer_test);
	delete (cure);
	//delete (Cloud);
	//delete (Zack);
}
