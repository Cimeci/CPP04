/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:20:49 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/18 11:21:00 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure(){
    std::cout << "Cure constructor\n";
}

Cure::Cure(const Cure &cp){
    std::cout << "Cure copy constructor\n";
    *this = cp;
}

Cure &Cure::operator=(const Cure &op){
    std::cout << "Cure assignement operator\n";
    if (this != &op)
        type = op.type;
    return (*this); 
}

Cure::~Cure(){
    std::cout << "Cure destructor\n";
}

Cure* Cure::clone() const {
    return new Cure(*this);
}