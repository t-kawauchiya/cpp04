/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:54:41 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 15:58:47 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const& type) : _type(type) {}

AMateria::AMateria(const AMateria& src)
{
  *this = src;
}

AMateria::~AMateria(void) {}

AMateria& AMateria::operator=(const AMateria& src)
{
  if (this == &src)
    return *this;
  this->_type = src._type;
  return *this;
}

std::string const& AMateria::getType() const
{
  return this->_type;
}

void AMateria::setType(std::string type)
{
  this->_type = type;
}
