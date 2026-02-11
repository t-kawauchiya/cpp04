/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takawauc <takawauc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:15:27 by takawauc          #+#    #+#             */
/*   Updated: 2026/02/11 13:55:15 by takawauc         ###   ########.fr       */
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
int right();

int main()
{
  right();
  wrong();
  return 0;
}

int right()
{
  {
    std::cout << "[right]\n";
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    std::cout << "meta : " << *meta;
    std::cout << "i : " << *i;
    std::cout << "j : " << *j;
    std::cout << "meta->makeSound()\n";
    meta->makeSound();
    std::cout << "i->makeSound()\n";
    i->makeSound();
    std::cout << "j->makeSound()\n";
    j->makeSound();

    delete meta;
    delete i;
    delete j;
    std::cout << separator;
  }
  {
    std::cout << "[setter/getter/copy constructor/destructer]\n";
    Animal animal1;
    Animal animal2(animal1);
    Dog dog1;
    Dog dog2(dog1);
    Cat cat1;
    Cat cat2(cat1);

    std::cout << "animal1.getType(): " << animal1.getType() << "\n";
    std::cout << "animal1.setType(\"animal1\")" << "\n";
    animal1.setType("animal1");
    std::cout << "animal1.getType(): " << animal1.getType() << "\n";

    std::cout << "dog1.getType(): " << dog1.getType() << "\n";
    std::cout << "dog1.setType(\"dog1\")" << "\n";
    dog1.setType("dog1");
    std::cout << "dog1.getType(): " << dog1.getType() << "\n";

    std::cout << "cat1.getType(): " << cat1.getType() << "\n";
    std::cout << "cat1.setType(\"cat1\")" << "\n";
    cat1.setType("cat1");
    std::cout << "cat1.getType(): " << cat1.getType() << "\n";
  }
  std::cout << separator;
  return 0;
}

int wrong()
{
  std::cout << "[wrong]\n";
  const WrongAnimal* meta = new WrongAnimal();
  const WrongAnimal* i = new WrongCat();
  std::cout << "meta : " << *meta;
  std::cout << "i : " << *i;
  std::cout << "meta->makeSound()\n";
  meta->makeSound();
  std::cout << "i->makeSound()\n";
  i->makeSound();

  delete i;
  delete meta;
  std::cout << separator;

  return 0;
}
