/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 14:21:54 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include "Brain.hpp"

#include <string>

class Animal
{
public:
  Animal(const Animal& other);
  virtual ~Animal(void);
  Animal& operator=(const Animal& other);

  std::string getType() const;
  void setType(const std::string type);
  const Brain* getBrain(void) const;
  void setBrain(const Brain& brain);

  virtual void makeSound(void) const = 0;

protected:
  std::string _type;
  Brain* _brain;
  Animal(void);
  Animal(std::string type);

private:
  static const std::string kDefaultType;
};

std::ostream& operator<<(std::ostream& os, const Animal& ct);

#endif
