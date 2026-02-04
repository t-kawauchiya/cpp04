/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:15:27 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/04 22:18:37 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int test_delete(void);

int test_copy(void);

const std::string separator = "----------------------------------\n";

int main()
{
  test_delete();
  std::cout << separator;
  test_copy();

  return 0;
}

int test_delete(void)
{
  std::cout << "[test_delete]\n";

  std::cout << "(leak check when Animal destructed)\n";
  const AAnimal* dog = new Dog();
  const AAnimal* cat = new Cat();
  delete cat;
  delete dog;

  std::cout << "\n(create animals)\n";
  AAnimal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

  std::cout << "\n(delete animals)\n";
  for (int i = 0; i < 4; i++)
    delete animals[i];

  return 0;
}

int test_copy(void)
{
  std::cout << "[test_copy]\n";
  Dog dog1;
  Dog dog2(dog1);
  Brain brain;

  std::cout << "\ndog1.getBrain()->getIdea(0): " << dog1.getBrain()->getIdea(0) << std::endl;
  std::cout << "(update dog1._brain._idea[0])\n";
  brain = *dog1.getBrain();
  brain.setIdea("sampo", 0);
  dog1.setBrain(brain);
  std::cout << "dog1.getBrain()->getIdea(0): " << dog1.getBrain()->getIdea(0) << std::endl;
  std::cout << "dog2.getBrain()->getIdea(0): " << dog2.getBrain()->getIdea(0) << std::endl;
  std::cout << std::endl;

  return 0;
}
