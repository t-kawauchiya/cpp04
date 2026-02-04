/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/04 21:14:21 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

const std::string Cat::kDefaultType = "Cat";

Cat::Cat() : Animal(kDefaultType)
{
  std::cout << "Cat default constructor called.\n";
}

Cat::Cat(std::string type) : Animal(type)
{
  std::cout << "Cat constructor called.\n";
}

Cat::Cat(const Cat& other)
{
  std::cout << "Cat copy constructor called.\n";
  *this = other;
}

Cat::~Cat(void)
{
  std::cout << "Cat destructor called.\n";
}

Cat& Cat::operator=(const Cat& src)
{
  std::cout << "Cat copy assignment constructor called.\n";
  this->_type = src._type;
  return (*this);
}

void Cat::makeSound(void) const
{
  std::cout << "miaou miaou\n";
}

std::ostream& operator<<(std::ostream& os, const Cat& ct)
{
  os << "type : " << ct.getType() << "\n";
  return os;
}
