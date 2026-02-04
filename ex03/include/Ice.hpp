/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:20:36 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/19 18:14:13 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_H_
#define _ICE_H_

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
protected:
public:
  Ice();
  ~Ice();
  Ice(const Ice& src);
  Ice& operator=(const Ice& src);

  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif
