/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/16 12:21:30 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
  std::cout << "\e[1;92mMateriaSource default constructer called.\e[0m"
            << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& obj) {
  *this = obj;
  std::cout << "\e[1;92mMateriaSource copy constructer called.\e[0m"
            << std::endl;
}

MateriaSource::~MateriaSource(void) {
  std::cout << "\e[1;92mMateriaSource deconstructer called.\e[0m"
            << std::endl;
}

void  MateriaSource::learnMateria(AMateria*) {
  return ;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
  return ;
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& obj) {
  if (this != &obj) {}
  else
    std::cout << "\e[1;31mMateriaSource Error: "
              << "Attempted self-assignment in copy assignment operator.\e[0m"
              << std::endl;
  return (*this);
}
