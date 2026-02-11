/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/11 22:28:49 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AANIMAL_H_
#define _AANIMAL_H_

#include <string>

class AAnimal
{
public:
  AAnimal(const AAnimal& other);
  virtual ~AAnimal(void);
  AAnimal& operator=(const AAnimal& other);

  std::string getType() const;
  void setType(const std::string type);

  virtual void makeSound(void) const = 0;

protected:
  std::string _type;
  AAnimal(void);
  AAnimal(std::string type);

private:
  static const std::string kDefaultType;
};

std::ostream& operator<<(std::ostream& os, const AAnimal& ct);

#endif
