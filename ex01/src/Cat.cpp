/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 13:30:54 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

const std::string Cat::kDefaultType = "Cat";

Cat::Cat() : Animal(kDefaultType)
{
  std::cout << "Cat default constructor called.\n";
  this->_brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
  std::cout << "Cat constructor called.\n";
  this->_brain = new Brain();
}

Cat::Cat(const Cat& other)
{
  std::cout << "Cat copy constructor called.\n";
  *this = other;
}

Cat& Cat::operator=(const Cat& src)
{
  std::cout << "Cat copy assignment constructor called.\n";
  this->_type = src._type;
  this->_brain = new Brain(*src._brain);
  return (*this);
}

Cat::~Cat(void)
{
  std::cout << "Cat destructor called.\n";
  delete this->_brain;
}

const Brain* Cat::getBrain(void) const
{
  return this->_brain;
}

void Cat::setBrain(const Brain& brain)
{
  *this->_brain = brain;
}

void Cat::makeSound(void) const
{
  std::cout << "miaou miaou\n";
}

std::ostream& operator<<(std::ostream& os, const Cat& cat)
{
  os << "type : " << cat.getType() << "\n";
  os << "Brain : " << *cat.getBrain();
  return os;
}
