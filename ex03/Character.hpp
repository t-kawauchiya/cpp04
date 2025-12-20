/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:25:16 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/20 22:01:50 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include "AMateria.hpp"
#include "ICharacter.hpp"

#include <string>

class Character : public ICharacter
{
public:
  Character(std::string name);
  ~Character();
  Character(const Character& src);
  Character& operator=(const Character& src);

  std::string const& getName() const;
  AMateria const& getInventry() const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);

private:
  Character();
  std::string _name;
  AMateria* _inventory[4];
  int _currentSlot;
};

#endif
