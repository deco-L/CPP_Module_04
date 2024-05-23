/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/09 13:46:44 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) :
Animal("dog") {
  std::cout << "\e[1;92mDog default constructor called.\e[0m" << std::endl
            << "Animal type \e[1;96m" << type << "\e[0m"
            << std::endl;
}

Dog::Dog(const Dog& obj) :
Animal("dog") {
  *this = obj;
  std::cout << "\e[1;92mDog copy constructor called.\e[0m" << std::endl
            << "Animal type \e[1;96m" << type << "\e[0m"
            << std::endl;
}

Dog::~Dog(void) {
  std::cout << "\e[1;92mDog deconstructor called.\e[0m" << std::endl
            << "Animal \e[1;96m" << type << "\e[0m>byebye~."
            << std::endl;
}

void Dog::makeSound(void) const {
  std::cout << "Animal " << type << ">Bowwow~" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) {
  if (this != &obj) {
    this->type = obj.type;
  }
  else
    std::cout << "\e[1;31mAnimal Error: "
              << "Attempted self-assignment in copy assignment operator"
              << "\e[0m"
              << std::endl;
  return (*this);
}
