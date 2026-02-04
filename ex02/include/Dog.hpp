/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/04 22:16:18 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H_
#define _DOG_H_

#include "AAnimal.hpp"

#include <string>

class Dog : public AAnimal
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
