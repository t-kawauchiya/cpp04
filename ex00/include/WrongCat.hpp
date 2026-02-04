/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/04 21:12:04 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONG_CAT_H_
#define _WRONG_CAT_H_

#include "WrongAnimal.hpp"

#include <string>

class WrongCat : public WrongAnimal
{
public:
  WrongCat(void);
  WrongCat(std::string type);
  WrongCat(const WrongCat& other);
  ~WrongCat(void);
  WrongCat& operator=(const WrongCat& other);

  void makeSound(void) const;

private:
  static const std::string kDefaultType;
};

std::ostream& operator<<(std::ostream& os, const WrongCat& ct);

#endif
