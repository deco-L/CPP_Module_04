/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/29 01:35:46 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() :
WrongAnimal("Wrongcat") {
  std::cout << "\e[1;92mCat default constructor called.\e[0m" << std::endl
            << "Cat type\e[1;96m" << type << "\e[0m"
            << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) :
WrongAnimal("Wrongcat") {
  *this = obj;
  std::cout << "\e[1;92mCat copy constructor called.\e[0m" << std::endl
            << "Cat type\e[1;96m" << type << "\e[0m"
            << std::endl;
}

WrongCat::~WrongCat(void) {
  std::cout << "\e[1;96mAnimal" << type << ">byebye~."
            << std::endl;
}

void WrongCat::makeSound(void) {
  std::cout << type << ">Meow Meow~" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
  if (this != &obj) {
    this->type = obj.type;
  }
  else
    std::cout << "\e[1;31mAnimal Error: "
              << "Attempted self-assignment in copy assignment operator"
              << "\e[0m"
              << std::endl;
  return *this;
}
