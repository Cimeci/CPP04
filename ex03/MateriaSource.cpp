/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:22:15 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/18 11:29:42 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria(std::string const & type): type(type){
	std::cout << "AMateria constructor type\n";
};

AMateria::AMateria(){
	std::cout << "AMateria constructor\n";
};

AMateria::AMateria(const AMateria &cp){
	std::cout << "AMateria copy constructor\n";
	*this = cp;
};

AMateria &AMateria::operator=(const AMateria &op){
	std::cout << "AMateria assignement operator\n";
	if (this != &op)
		type = op.type;
	return (*this);
};

std::string const &AMateria::getType()const{
	return(type);
}

void AMateria::use(ICharacter& target){
	
}