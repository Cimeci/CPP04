/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 09:19:14 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/28 10:41:58 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{

    private:
        Brain* brain;

    public:
        Dog();
        Dog(const Dog &cp);
        Dog &operator=(const Dog& op);
        ~Dog();

        void makeSound() const;
};

#endif