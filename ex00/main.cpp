/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:15:27 by takawauc          #+#    #+#             */
/*   Updated: 2025/12/18 17:18:06 by takawauc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

const std::string separator = "----------------------------------\n";
int wrong();

int main()
{
  std::cout << separator;
  std::cout << "[constructor]\n";
  const Animal* meta = new Animal();
  const Animal* i = new Dog();
  const Animal* j = new Cat();
  Animal k;
  k.setType("animal_k");
  Animal l(k);
  Dog m;
  m.setType("dog_m");
  Dog n(m);
  Cat o;
  o.setType("cat_o");
  Cat p(o);

  std::cout << *meta;
  std::cout << *i;
  std::cout << *j;
  std::cout << separator;
  std::cout << "[polymophism]\n";
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  std::cout << separator;
  std::cout << "[setter/getter/copy constructor]\n";

  std::cout << k << l;
  std::cout << m << n;
  std::cout << o << p;
  std::cout << separator;
  std::cout << "[destructor]\n";

  delete i;
  delete j;
  delete meta;
  wrong();
  return 0;
}

int wrong()
{
  std::cout << separator;
  std::cout << "[wrong]\n";
  const WrongAnimal* meta = new WrongAnimal();
  const WrongAnimal* i = new WrongCat();
  std::cout << *meta;
  std::cout << *i;
  i->makeSound();
  meta->makeSound();

  delete i;
  delete meta;
  std::cout << separator;

  return 0;
}
