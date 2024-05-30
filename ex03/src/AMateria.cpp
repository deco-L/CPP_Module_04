/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/30 23:34:13 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) :
type("none") {
  std::cout << "\e[1;92mAMateria default constructor called.\e[0m"
            << std::endl;
}

const std::string&  AMateria::getType(void) const {
  return (type);
}

void  AMateria::use(ICharacter& target) {
  std::cout << "AMateria used on \e[1;92m" << target.getName() << "\e[0m."
            << std::endl;
}

AMateria& AMateria::operator=(const AMateria& obj) {
  if (this != &obj) {
    this->type = obj.type;
  }
  else
    std::cout << "\e[1;31mAMateria Error: "
              << "Attempted self-assignment in copy assignment operator.\e[0m"
              << std::endl;
  return (*this);
};
