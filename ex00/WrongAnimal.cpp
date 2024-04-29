/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/29 01:38:46 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) :
type("none") {
  std::cout << "\e[1;92mWrongAnimal default constructor called.\e[0m"
            << std::endl
            << "WrongAnimal type\e[1;96m" << type << "\e[0m"
            << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
  *this = obj;
  std::cout << "\e[1;92mWrongAnimal copy constructor called.\e[0m" << std::endl
            << "WrongAnimal type\e[1;96m" << type << "\e[0m"
            << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) :
type(type) {
  std::cout << "\e[1;92mWrongAnimal constructor called.\e[0m" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << "\e[1;96mWrongAnimal" << type << ">byebye~."
            << std::endl;
}

void  WrongAnimal::makeSound(void) const {
  std::cout << type << ">..." << std::endl;
}

std::string  WrongAnimal::getType(void) const {
  std::cout << "WrongAnimal type\e[1;96m is " << type << std::endl;
  return (type);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
  if (this != &obj) {
    this->type = obj.type;
  }
  else
    std::cout << "\e[1;31mWrongAnimal Error: "
              << "Attempted self-assignment in copy assignment operator"
              << "\e[0m"
              << std::endl;
  return *this;
}
