/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/09 15:10:22 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
  this->ideas = new std::string[100];
  std::cout << "\e[1;92mBrain default constructor called.\e[0m" << std::endl;
}

Brain::Brain( Brain& obj) {
  this->ideas = new std::string[100];
  *this = obj;
  std::cout << "\e[1;92mBrain copy constructor called.\e[0m" << std::endl;
}

Brain::~Brain(void) {
  delete [] this->ideas;
  std::cout << "\e[1;92mBrain deconstructor called.\e[0m" << std::endl;
}

Brain&  Brain::operator=(const Brain& obj) {
  if (this != &obj)
    for (int i = 0; i < 100; i++)
      this->ideas[i] = obj.ideas[i];
  else
    std::cout << "\e[1;31mError: "
              << "Attempted self-assignment in copy assignment operator"
              << std::endl;
  return (*this);
}