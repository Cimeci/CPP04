/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:04:50 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/18 15:38:46 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(){
	std::cout << "Character constructor\n";
	name = "Ilan";
}

Character::Character(std::string name){
	std::cout << "Character constructor name\n";
	this->name = name;	
}

std::string const &ICharacter::getName() const{
	return (name);
}