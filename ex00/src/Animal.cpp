/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/11 21:07:43 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

const std::string Animal::kDefaultType = "Animal";

Animal::Animal() : _type(kDefaultType)
{
  std::cout << "Animal default constructor called.\n";
}

Animal::Animal(std::string type) : _type(type)
{
  std::cout << "Animal constructor called.\n";
}

Animal::Animal(const Animal& other)
{
  std::cout << "Animal copy constructor called.\n";
  this->_type = other._type;
}

Animal::~Animal(void)
{
  std::cout << "Animal destructor called.\n";
}

Animal& Animal::operator=(const Animal& src)
{
  std::cout << "Animal copy assignment constructor called.\n";
  if (this == &src)
    return (*this);
  this->_type = src._type;
  return (*this);
}

std::string Animal::getType() const
{
  return this->_type;
}

void Animal::setType(const std::string type)
{
  this->_type = type;
}

void Animal::makeSound(void) const
{
  std::cout << "(noise)\n";
}

std::ostream& operator<<(std::ostream& os, const Animal& ct)
{
  os << "type : " << ct.getType() << "\n";
  return os;
}
