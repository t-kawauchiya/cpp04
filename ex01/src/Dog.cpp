/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/11 22:53:18 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include "Brain.hpp"

#include <iostream>

const std::string Dog::kDefaultType = "Dog";

Dog::Dog() : Animal(kDefaultType)
{
  std::cout << "Dog default constructor called.\n";
  this->_brain = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
  std::cout << "Dog parameteric constructor called.\n";
  this->_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
  std::cout << "Dog copy constructor called.\n";
  this->_brain = new Brain(*other._brain);
}

Dog::~Dog(void)
{
  std::cout << "Dog destructor called.\n";
  delete this->_brain;
}

Dog& Dog::operator=(const Dog& src)
{
  std::cout << "Dog copy assignment operator called.\n";
  if (this == &src)
    return (*this);
  Animal::operator=(src);
  this->_brain = new Brain(*src._brain);
  return (*this);
}

Brain* Dog::getBrain(void) const
{
  return this->_brain;
}

void Dog::setBrain(const Brain& brain)
{
  *this->_brain = brain;
}

void Dog::makeSound(void) const
{
  std::cout << "Wouaf wouaf\n";
}

std::ostream& operator<<(std::ostream& os, const Dog& dog)
{
  os << "type : " << dog.getType() << "\n";
  os << "Brain : " << *dog.getBrain();
  return os;
}
