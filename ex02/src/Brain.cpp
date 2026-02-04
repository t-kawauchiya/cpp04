/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:46:39 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 13:29:19 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <algorithm>
#include <iostream>
#include <string>

Brain::Brain()
{
  std::cout << "Brain default constructor called.\n";
  for (int i = 0; i < 100; i++)
    this->_idea[i] = "food";
}

Brain::Brain(const std::string (&idea)[100])
{
  std::cout << "Brain parameterized constructor called.\n";
  std::copy(idea, idea + 100, this->_idea);
}

Brain::Brain(const Brain& other)
{
  std::cout << "Brain copy constructor called.\n";
  *this = other;
}

Brain& Brain::operator=(const Brain& src)
{
  std::cout << "Brain copy assignment constructor called.\n";
  std::copy(src._idea, src._idea + 100, this->_idea);
  return (*this);
}

Brain::~Brain(void)
{
  std::cout << "Brain destructor called.\n";
}

void Brain::setIdea(const std::string& idea, int index)
{
  this->_idea[index] = idea;
}

std::string Brain::getIdea(int index) const
{
  return this->_idea[index];
}

std::ostream& operator<<(std::ostream& os, const Brain& ct)
{
  for (int i = 0; i < 100; i++)
    os << "idea[" << i << "] : " << ct.getIdea(i) << "\n";
  return os;
}
