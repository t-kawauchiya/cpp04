/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/04 21:13:56 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

const std::string Dog::kDefaultType = "Dog";

Dog::Dog() : Animal(kDefaultType)
{
  std::cout << "Dog default constructor called.\n";
}

Dog::Dog(std::string type) : Animal(type)
{
  std::cout << "Dog constructor called.\n";
}

Dog::Dog(const Dog& other)
{
  std::cout << "Dog copy constructor called.\n";
  *this = other;
}

Dog::~Dog(void)
{
  std::cout << "Dog destructor called.\n";
}

Dog& Dog::operator=(const Dog& src)
{
  std::cout << "Dog copy assignment constructor called.\n";
  this->_type = src._type;
  return (*this);
}

void Dog::makeSound(void) const
{
  std::cout << "Wouaf wouaf\n";
}

std::ostream& operator<<(std::ostream& os, const Dog& ct)
{
  os << "type : " << ct.getType() << "\n";
  return os;
}
