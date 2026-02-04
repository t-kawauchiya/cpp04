/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/04 21:11:46 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONG_ANIMAL_H_
#define _WRONG_ANIMAL_H_

#include <string>

class WrongAnimal
{
public:
  WrongAnimal(void);
  WrongAnimal(std::string type);
  WrongAnimal(const WrongAnimal& other);
  virtual ~WrongAnimal(void);
  WrongAnimal& operator=(const WrongAnimal& other);

  std::string getType() const;
  void setType(const std::string type);

  void makeSound(void) const;

protected:
  std::string _type;

private:
  static const std::string kDefaultType;
};

std::ostream& operator<<(std::ostream& os, const WrongAnimal& ct);

#endif
