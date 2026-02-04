/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 16:40:47 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <string>

class Animal
{
public:
  Animal(void);
  Animal(std::string type);
  virtual ~Animal(void);
  Animal(const Animal& other);
  Animal& operator=(const Animal& other);

  std::string getType() const;
  void setType(const std::string type);
  virtual void makeSound(void) const;

protected:
  std::string _type;

private:
  static const std::string kDefaultType;
};

std::ostream& operator<<(std::ostream& os, const Animal& ct);

#endif
