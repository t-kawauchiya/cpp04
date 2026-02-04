/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 12:54:49 by takawauc         ###   ########.fr       */
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
  ~Dog(void);
  Dog(const Dog& other);
  Dog& operator=(const Dog& other);
  void makeSound(void) const;

  const Brain* getBrain(void) const;
  void setBrain(const Brain& brain);

private:
  static const std::string kDefaultType;
  Brain* _brain;
};

std::ostream& operator<<(std::ostream& os, const Dog& ct);

#endif
