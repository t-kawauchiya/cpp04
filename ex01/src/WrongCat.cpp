/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 17:13:36 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

const std::string WrongCat::kDefaultType = "WrongCat";

WrongCat::WrongCat() : WrongAnimal(kDefaultType)
{
  std::cout << "WrongCat default constructor called.\n";
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
  std::cout << "WrongCat constructor called.\n";
}

WrongCat::WrongCat(const WrongCat& other)
{
  std::cout << "WrongCat copy constructor called.\n";
  *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
  std::cout << "WrongCat copy assignment constructor called.\n";
  this->_type = src._type;
  return (*this);
}

WrongCat::~WrongCat(void)
{
  std::cout << "WrongCat destructor called.\n";
}

void WrongCat::makeSound(void) const
{
  std::cout << "miaou miaou\n";
}

std::ostream& operator<<(std::ostream& os, const WrongCat& ct)
{
  os << "type : " << ct.getType() << "\n";
  return os;
}
