/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */ /*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/11 21:40:25 by takawauc         ###   ########.fr       */
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
  std::cout << "Dog parmeteric constructor called.\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
  std::cout << "Dog copy constructor called.\n";
}

Dog::~Dog(void)
{
  std::cout << "Dog destructor called.\n";
}

Dog& Dog::operator=(const Dog& src)
{
  std::cout << "Dog copy assignment operator called.\n";

  if (this == &src)
    return (*this);
  Animal::operator=(src);
  return (*this);
}

void Dog::makeSound(void) const
{
  std::cout << "Wouaf wouaf\n";
}

std::ostream& operator<<(std::ostream& os, const Dog& dog)
{
  os << "type : " << dog.getType() << "\n";
  return os;
}
