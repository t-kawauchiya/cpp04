/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/12 19:30:03 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

#include <iostream>

const std::string AAnimal::kDefaultType = "AAnimal";

AAnimal::AAnimal() : _type(kDefaultType)
{
  std::cout << "AAnimal default constructor called.\n";
}

AAnimal::AAnimal(std::string type) : _type(type)
{
  std::cout << "AAnimal parameterized constructor called.\n";
}

AAnimal::AAnimal(const AAnimal& other)
{
  std::cout << "AAnimal copy constructor called.\n";
  *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& src)
{
  std::cout << "AAnimal copy assignment constructor called.\n";
  this->_type = src._type;
  return (*this);
}

AAnimal::~AAnimal(void)
{
  std::cout << "AAnimal destructor called.\n";
}

std::string AAnimal::getType() const
{
  return this->_type;
}

void AAnimal::setType(const std::string type)
{
  this->_type = type;
}

std::ostream& operator<<(std::ostream& os, const AAnimal& ct)
{
  os << "type : " << ct.getType() << "\n";
  return os;
}
