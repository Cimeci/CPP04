/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 09:15:45 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/15 09:33:01 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{
  
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(const Animal &cp);
        Animal &operator=(const Animal& op);
        ~Animal();
};

#endif