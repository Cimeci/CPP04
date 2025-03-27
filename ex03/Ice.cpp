/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:30:52 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/27 15:53:16 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    // std::cout << "Ice constructor\n";
}

Ice::Ice(const Ice &cp){
    // std::cout << "Ice copy constructor\n";
    *this = cp;
}

Ice &Ice::operator=(const Ice &op){
    // std::cout << "Ice assignement operator\n";
    if (this != &op)
        type = op.type;
    return (*this); 
}

Ice::~Ice(){
    // std::cout << "Ice destructor\n";
}

Ice* Ice::clone() const {
    return new Ice(*this); // deep copy
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}