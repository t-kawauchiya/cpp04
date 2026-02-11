/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/11 22:09:36 by takawauc         ###   ########.fr       */
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

Cat::Cat(const Cat& other) : Animal(other)
{
  std::cout << "Cat copy constructor called.\n";
}

Cat::~Cat(void)
{
  std::cout << "Cat destructor called.\n";
}

Cat& Cat::operator=(const Cat& src)
{
  std::cout << "Cat assignment operator called.\n";
  if (this == &src)
    return (*this);
  Animal::operator=(src);
  return (*this);
}

void Cat::makeSound(void) const
{
  std::cout << "miaou miaou\n";
}

std::ostream& operator<<(std::ostream& os, const Cat& cat)
{
  os << "type : " << cat.getType() << "\n";
  return os;
}
