/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/10 14:47:58 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria(void) {
  std::cout << "\e[1;92mAMateria default constructor called.\e[0m"
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
