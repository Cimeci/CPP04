/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 09:19:14 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/15 09:21:38 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal{
  
    protected:
        std::string type;
    
    public:
        Dog();
        Dog(const Dog &cp);
        Dog &operator=(const Dog& op);
        ~Dog();

        void makeSound();
};

#endif