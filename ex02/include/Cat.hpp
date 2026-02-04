/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/04 22:16:01 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_H_
#define _CAT_H_

#include "AAnimal.hpp"

#include <string>

class Cat : public AAnimal
{
public:
  Cat(void);
  Cat(std::string type);
  ~Cat(void);
  Cat(const Cat& other);
  Cat& operator=(const Cat& other);

  void makeSound(void) const;

private:
  static const std::string kDefaultType;
};

std::ostream& operator<<(std::ostream& os, const Cat& ct);

#endif
