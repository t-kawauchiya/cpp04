/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:00:32 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 18:16:14 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

Cure::Cure() : AMateria() {}

Cure::~Cure() {}

Cure::Cure(const Cure& src)
{
  *this = src;
}

Cure& Cure::operator=(const Cure& src)
{
  if (this == &src)
    return *this;
  this->_type = src._type;
  return *this;
}

AMateria* Cure::clone() const
{
  return new Cure();
}

void Cure::use(ICharacter& target)
{
  std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
