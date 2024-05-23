/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/09 13:47:08 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) :
type("none") {
  std::cout << "\e[1;92mAnimal default constructor called.\e[0m" << std::endl
            << "Animal type\e[1;96m " << type << "\e[0m"
            << std::endl;
}

Animal::Animal(const Animal& obj) {
  *this = obj;
  std::cout << "\e[1;92mAnimal copy constructor called.\e[0m" << std::endl
            << "Animal type\e[1;96m " << type << "\e[0m"
            << std::endl;
}

Animal::Animal(const std::string& type) :
type(type) {
  std::cout << "\e[1;92mAnimal constructor called.\e[0m" << std::endl;
}

Animal::~Animal(void) {
  std::cout << "\e[1;92mAnimal deconstructor called.\e[0m" << std::endl
            << "Animal \e[1;96m" << type << "\e[0m> byebye~."
            << std::endl;
}

void  Animal::makeSound(void) const {
  std::cout << "Animal " << type << ">..." << std::endl;
}

std::string  Animal::getType(void) const {
  return (type);
}

Animal& Animal::operator=(const Animal& obj) {
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