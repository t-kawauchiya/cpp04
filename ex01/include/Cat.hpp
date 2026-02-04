/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 12:58:37 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_H_
#define _CAT_H_

#include "Animal.hpp"
#include "Brain.hpp"

#include <string>

class Cat : public Animal
{
public:
  Cat(void);
  Cat(std::string type);
  ~Cat(void);
  Cat(const Cat& other);
  Cat& operator=(const Cat& other);
  void makeSound(void) const;

  const Brain* getBrain(void) const;
  void setBrain(const Brain& brain);

private:
  static const std::string kDefaultType;
  Brain* _brain;
};

std::ostream& operator<<(std::ostream& os, const Cat& ct);

#endif
