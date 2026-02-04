/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:00:32 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 18:14:00 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>

Ice::Ice() : AMateria() {}

Ice::~Ice() {}

Ice::Ice(const Ice& src)
{
  *this = src;
}

Ice& Ice::operator=(const Ice& src)
{
  if (this == &src)
    return *this;
  this->_type = src._type;
  return *this;
}

AMateria* Ice::clone() const
{
  return new Ice();
}

void Ice::use(ICharacter& target)
{
  std::cout << "* shouts an ice bolt at " << target.getName() << " *\n";
}
