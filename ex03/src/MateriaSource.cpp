/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/31 14:41:11 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
  for (int i = 0; i < ARRAY_SIZE; i++)
    this->slot[i] = 0;
  std::cout << "\e[1;92mMateriaSource default constructer called.\e[0m"
            << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& obj) {
  *this = obj;
  for (int i = 0; i < ARRAY_SIZE; i++)
    this->slot[i] = 0;
  std::cout << "\e[1;92mMateriaSource copy constructer called.\e[0m"
            << std::endl;
}

MateriaSource::~MateriaSource(void) {
  for (int i = 0; i < ARRAY_SIZE; i++)
    if (this->slot[i])
      delete this->slot[i];
  std::cout << "\e[1;92mMateriaSource deconstructer called.\e[0m"
            << std::endl;
}

void  MateriaSource::learnMateria(AMateria* materia) {
  int index = 0;

  while (index < ARRAY_SIZE && this->slot[index] != 0)
    index++;
  if (index == ARRAY_SIZE) {
    std::cout << "Error: Full slot." << std::endl;
    return ;
  }
  this->slot[index] = materia;
  std::cout << "Learned " << materia->getType() << "." << std::endl;
  return ;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
  int index = 0;

  while (index < ARRAY_SIZE && this->slot[index] &&
                  this->slot[index]->getType() != type)
    index++;
  if (index == ARRAY_SIZE || this->slot[index] == 0) {
    std::cout << "Error: " << type << " does not exist." << std::endl;
    return (NULL);
  }
  std::cout << type << " created." << std::endl;
  AMateria *m;
  m = ((this->slot)[index])->clone();
  return (m);
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& obj) {
  if (this != &obj) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
      if (this->slot[i])
        delete this->slot[i];
      if (obj.slot[i])
        this->slot[i] = obj.slot[i]->clone();
    }
  }
  else
    std::cout << "\e[1;31mMateriaSource Error: "
              << "Attempted self-assignment in copy assignment operator.\e[0m"
              << std::endl;
  return (*this);
}
