/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 09:20:57 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/15 09:21:51 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal{
  
    protected:
        std::string type;
    
    public:
        Cat();
        Cat(const Cat &cp);
        Cat &operator=(const Cat& op);
        ~Cat();

        void makeSound();
};

#endif