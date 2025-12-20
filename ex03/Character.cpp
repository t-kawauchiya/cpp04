/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:54:41 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 17:32:14 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
// Character();
// ~Character();
// Character(const Character& src);
// Character& operator=(const Character& src);
//
// std::string const& getName() const;
// void unequip(int idx);
// void use(int idx, ICharacter& target);

Character::Character() : ICharacter() {}

Character::~Character() {}

Character::Character(const Character& src)
{
  *this = src;
}

Character& Character::operator=(const Character& src)
{
  if (this == &src)
    return *this;
  this->_name = src._name;
  return *this;
}

std::string const& Character::getName() const;
