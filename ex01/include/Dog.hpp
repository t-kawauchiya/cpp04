/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/11 21:18:44 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H_
#define _DOG_H_

#include "Animal.hpp"
#include "Brain.hpp"

#include <string>

class Dog : public Animal
{
public:
  Dog(void);
  Dog(std::string type);
  Dog(const Dog& other);

  ~Dog(void);

  Dog& operator=(const Dog& other);

  Brain* getBrain(void) const;
  void setBrain(const Brain& brain);

  void makeSound(void) const;

private:
  static const std::string kDefaultType;
  Brain* _brain;
};

std::ostream& operator<<(std::ostream& os, const Dog& ct);

#endif
