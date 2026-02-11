/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/11 22:58:34 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

#include <iostream>

const std::string Cat::kDefaultType = "Cat";

Cat::Cat() : AAnimal(kDefaultType)
{
  std::cout << "Cat default constructor called.\n";
  this->_brain = new Brain();
}

Cat::Cat(std::string type) : AAnimal(type)
{
  std::cout << "Cat constructor called.\n";
  this->_brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
  std::cout << "Cat copy constructor called.\n";
  this->_brain = new Brain(*other._brain);
}

Cat::~Cat(void)
{
  std::cout << "Cat destructor called.\n";
  delete this->_brain;
}

Cat& Cat::operator=(const Cat& src)
{
  std::cout << "Cat assignment operator called.\n";
  if (this == &src)
    return (*this);
  AAnimal::operator=(src);
  this->_brain = new Brain(*src._brain);
  return (*this);
}

Brain* Cat::getBrain(void) const
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
