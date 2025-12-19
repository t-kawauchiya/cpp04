/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 17:10:44 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

const std::string WrongAnimal::kDefaultType = "WrongAnimal";

WrongAnimal::WrongAnimal() : _type(kDefaultType)
{
  std::cout << "WrongAnimal default constructor called.\n";
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
  std::cout << "WrongAnimal constructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
  std::cout << "WrongAnimal copy constructor called.\n";
  *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
  std::cout << "WrongAnimal copy assignment constructor called.\n";
  this->_type = src._type;
  return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
  std::cout << "WrongAnimal destructor called.\n";
}

std::string WrongAnimal::getType() const
{
  return this->_type;
}

void WrongAnimal::setType(const std::string type)
{
  this->_type = type;
}

void WrongAnimal::makeSound(void) const
{
  std::cout << "(noise)\n";
}

std::ostream& operator<<(std::ostream& os, const WrongAnimal& ct)
{
  os << "type : " << ct.getType() << "\n";
  return os;
}
