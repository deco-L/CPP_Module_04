/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/09 14:39:42 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
Animal("cat") {
  this->brain = new Brain;
  std::cout << "\e[1;92mCat default constructor called.\e[0m" << std::endl
            << "Animal type \e[1;96m" << type << "\e[0m"
            << std::endl;
}

Cat::Cat(const Cat& obj) :
Animal("cat") {
  this->brain = new Brain;
  *this = obj;
  std::cout << "\e[1;92mCat copy constructor called.\e[0m" << std::endl
            << "Animal type \e[1;96m" << type << "\e[0m"
            << std::endl;
}

Cat::~Cat(void) {
  delete this->brain;
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
    this->brain = obj.brain;
  }
  else
    std::cout << "\e[1;31mCat Error: "
              << "Attempted self-assignment in copy assignment operator"
              << "\e[0m"
              << std::endl;
  return (*this);
}
