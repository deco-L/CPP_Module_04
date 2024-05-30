/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/30 23:25:48 by csakamot         ###   ########.fr       */
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
  for (int i = 0; i < ARRAY_SIZE; i++)
    this->slot[i] = NULL;
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
  for (int i = 0; i < ARRAY_SIZE; i++)
    if (this->slot[i])
      delete this->slot[i];
  std::cout << "\e[1;92mCharacter deconstructer called.\e[0m"
            << std::endl;
}

const std::string&  Character::getName( void ) const {
  return (this->name);
}

void  Character::equip(AMateria* obj) {
  int index = 0;

  for (index = 0; index < ARRAY_SIZE; index++) {
    if (!this->slot[index]) {
      this->slot[index] = obj;
      break ;
    }
  }
  if (index == ARRAY_SIZE)
    std::cout << "full slot." << std::endl;
  return ;
}

void  Character::unequip(int idx) {
  if (0 <= idx && idx <= 4 && this->slot[idx]) {
    std::cout << "Material unequiqed." << std::endl;
    this->slot[idx] = NULL;
  } else if (0 <= idx && idx <= ARRAY_SIZE)
    std::cout << "Error: Slots are already unequiped." << std::endl;
  else
    std::cout << "Error: Invalid index." << std::endl;
  return ;
}

void  Character::use(int idx, ICharacter& target) {
  if (0 <= idx && idx <= ARRAY_SIZE && this->slot[idx])
    this->slot[idx]->use(target);
  else if (0 <= idx && idx <= ARRAY_SIZE)
    std::cout << "Error: Slot is empty." << std::endl;
  else
    std::cout << "Error: Invalid index." << std::endl;
  return ;
}

Character& Character::operator=(const Character& obj) {
  if (this != &obj) {
    this->name = obj.name;
    for (int i = 0; i < ARRAY_SIZE; i++) {
      if (this->slot[i])
        delete this->slot[i];
      if (obj.slot[i])
        this->slot[i] = obj.slot[i]->clone();
    }
  }
  else
    std::cout << "\e[1;31mCharacter Error: "
              << "Attempted self-assignment in copy assignment operator.\e[0m"
              << std::endl;
  return (*this);
}
