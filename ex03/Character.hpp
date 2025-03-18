/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:59:19 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/18 15:37:26 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CARACTER_HPP
# define CARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter{
	
	public:
		Character();
		Character(const Character &cp);
		Character &operator=(const Character &op);
		~Character();
		
		Character(std::string name);
};

#endif