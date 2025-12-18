/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 16:21:28 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H_
#define _DOG_H_

#include "Animal.hpp"

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

private:
  static const std::string kDefaultType;
};

std::ostream& operator<<(std::ostream& os, const Dog& ct);

#endif
