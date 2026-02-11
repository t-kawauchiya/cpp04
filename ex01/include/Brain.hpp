/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:40:30 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/11 21:20:00 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_H_
#define _BRAIN_H_

#include <string>

class Brain
{
public:
  Brain(void);
  Brain(const std::string (&idea)[100]);
  Brain(const Brain& other);

  ~Brain(void);

  Brain& operator=(const Brain& other);

  void setIdea(const std::string& idea, int index);
  std::string getIdea(int index) const;

private:
  std::string _idea[100];
};

std::ostream& operator<<(std::ostream& os, const Brain& ct);

#endif
