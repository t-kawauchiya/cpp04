/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:37:01 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/20 23:02:24 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_H_
#define _AMATERIA_H_

#include <string>

class ICharacter;

class AMateria
{
protected:
  std::string _type;

public:
  AMateria(void);
  AMateria(std::string const& type);
  // AMateria(const AMateria& src);
  virtual ~AMateria(void);
  // AMateria& operator=(const AMateria& src);

  std::string const& getType() const;
  void setType(std::string type);

  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target) = 0;
};

#endif
