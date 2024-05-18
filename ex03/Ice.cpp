/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/18 13:03:26 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) :
type("Ice") {
  std::cout << "\e[1;92mIce default constructor called.\e[0m"
            << std::endl;
}

Ice::Ice(const Ice& obj) {
  *this = obj;
  std::cout << "\e[1;92mIce copy constructor called.\e[0m"
            << std::endl;
}

Ice::~Ice(void) {
  std::cout << "\e[1;92mIce deconstructor called.\e[0m"
            << std::endl;
}

AMateria* Ice::clone(void) const {
  Ice *obj;

  obj = new Ice();
  return (obj);
}

void  Ice::use(ICharacter& target) {
  std::cout << "Ice: \'* shoots an ice bolt at " << &target << " *\'"
            << std::endl;
  return ;
}

Ice& Ice::operator=(const Ice& obj) {
  if (this != &obj) {
    this->type = obj.type;
  }
  else
    std::cout << "\e[1;31mIce Error: "
              << "Attempted self-assignment in copy assignment operator.\e[0m"
              << std::endl;
  return (*this);
}
