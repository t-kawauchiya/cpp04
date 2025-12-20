/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:37:01 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/20 22:49:54 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIA_SOURCE_H_
#define _MATERIA_SOURCE_H_

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#include <string>

class MateriaSource : IMateriaSource
{
public:
  MateriaSource();
  ~MateriaSource();
  MateriaSource(MateriaSource& src);
  MateriaSource& operator=(MateriaSource& src);

  void learnMateria(AMateria* materia);
  AMateria* createMateria(std::string const& type);

private:
  AMateria* _memory[4];
};

#endif
