/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 13:31:30 by takawauc         ###   ########.fr       */
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
  std::cout << "Dog constructor called.\n";
  this->_brain = new Brain();
}

Dog::Dog(const Dog& other)
{
  std::cout << "Dog copy constructor called.\n";
  *this = other;
}

Dog& Dog::operator=(const Dog& src)
{
  std::cout << "Dog copy assignment constructor called.\n";
  this->_type = src._type;
  this->_brain = new Brain(*src._brain);
  return (*this);
}

Dog::~Dog(void)
{
  std::cout << "Dog destructor called.\n";
  delete this->_brain;
}

const Brain* Dog::getBrain(void) const
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
  os << "Brain : \n" << *dog.getBrain();
  return os;
}
