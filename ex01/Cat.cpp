/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/08 12:02:06 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
Animal("cat") {
  std::cout << "\e[1;92mCat default constructor called.\e[0m" << std::endl
            << "Animal type \e[1;96m" << type << "\e[0m"
            << std::endl;
}

Cat::Cat(const Cat& obj) :
Animal("cat") {
  *this = obj;
  std::cout << "\e[1;92mCat copy constructor called.\e[0m" << std::endl
            << "Animal type \e[1;96m" << type << "\e[0m"
            << std::endl;
}

Cat::~Cat(void) {
  std::cout << "\e[1;92mCat deconstructor called.\e[0m" << std::endl
            << "Animal \e[1;96m" << type << "\e[0m>byebye~."
            << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "Animal " << type << ">Meow Meow~" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) {
  if (this != &obj) {
    this->type = obj.type;
  }
  else
    std::cout << "\e[1;31mCat Error: "
              << "Attempted self-assignment in copy assignment operator"
              << "\e[0m"
              << std::endl;
  return *this;
}
