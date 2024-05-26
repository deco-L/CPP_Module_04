/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/18 14:55:00 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) :
name("None"), slot() {
  std::cout << "\e[1;92mCharacter default constructer called.\e[0m"
            << std::endl;
}

Character::Character(const std::string& name) :
name(name) {
  std::cout << "\e[1;92mCharacter constructer called.\e[0m"
            << std::endl;
}

Character::Character(const Character& obj) :
name("None") {
  *this = obj;
  std::cout << "\e[1;92mCharacter copy constructer called.\e[0m"
            << std::endl;
}

Character::~Character(void) {
  std::cout << "\e[1;92mCharacter deconstructer called.\e[0m"
            << std::endl;
}

const std::string&  Character::getName( void ) const {
  return (this->name);
}

void  Character::equip(AMateria* m) {
  return ;
}

void  Character::unequip(int idx) {
  return ;
}

void  Character::use(int idx, ICharacter& target) {
  return ;
}

Character& Character::operator=(const Character& obj) {
  if (this != &obj) {
    this->name = obj.name;
  }
  else
    std::cout << "\e[1;31mCharacter Error: "
              << "Attempted self-assignment in copy assignment operator.\e[0m"
              << std::endl;
  return (*this);
}
