/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/31 00:52:13 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) :
AMateria("cure") {
  std::cout << "\e[1;92mCure default constructor called.\e[0m"
            << std::endl;
}

Cure::Cure(const Cure& obj) :
AMateria(obj) {
  *this = obj;
  std::cout << "\e[1;92mCure copy constructor called.\e[0m"
            << std::endl;
}

Cure::~Cure(void) {
  std::cout << "\e[1;92mCure deconstructor called.\e[0m"
            << std::endl;
}

Cure* Cure::clone(void) const {
  Cure  *obj;

  obj = new Cure;
  return (obj);
}

void  Cure::use(ICharacter& target) {
  std::cout << "Cure: \"* heals " << target.getName() << "'s wounds *\""
            << std::endl;
  return ;
}

Cure& Cure::operator=(const Cure& obj) {
  if (this != &obj) {
    this->type = obj.type;
  }
  else
    std::cout << "\e[1;31mCure Error: "
              << "Attempted self-assignment in copy assignment operator.\e[0m"
              << std::endl;
  return (*this);
}
