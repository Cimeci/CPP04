/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 09:22:24 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/17 13:23:43 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "colors.hpp"

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main(void)
{
    const int size = 10;

    Animal* animal[size];

    for (int i = 0; i < size; i++)
    {
        if (i < size / 2)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }

    for (int i = 0; i < size; i++){
        animal[i]->makeSound();
    }
    
    for (int i = 0; i < size; i++){
        delete animal[i];
    }

    return 0;
}