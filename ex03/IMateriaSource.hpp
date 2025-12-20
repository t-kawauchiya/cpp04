/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:37:01 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/20 22:11:40 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _IMATERIA_SOURCE_H_
#define _IMATERIA_SOURCE_H_

#include "AMateria.hpp"

#include <string>

class IMateriaSource
{
public:
  virtual ~IMateriaSource(void);
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif
