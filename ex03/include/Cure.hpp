/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:20:36 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 18:14:51 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_H_
#define _CURE_H_

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
protected:
public:
  Cure();
  ~Cure();
  Cure(const Cure& src);
  Cure& operator=(const Cure& src);

  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif
