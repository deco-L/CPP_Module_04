/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/06/08 15:54:09 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <cstdlib>
#include <sys/ioctl.h>
#include <unistd.h>

static size_t get_term_line() {
	winsize	terminal_size;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &terminal_size);
	return (terminal_size.ws_col);
}

static void draw_terminal_line() {
	size_t	terminal_col;

	terminal_col = get_term_line();
	for (size_t i = 0; i < terminal_col; i++)
		std::cout << "=";
	std::cout << std::endl;
	return ;
}

int main(void) {
  draw_terminal_line();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  const Animal* tmp = new Animal();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << tmp->getType() << " " << std::endl;
  i->makeSound(); //will output the cat sound!
  j->makeSound();
  tmp->makeSound();
  delete j;
  delete i;
  delete tmp;
  draw_terminal_line();

  draw_terminal_line();
  const WrongAnimal*  metameta = new WrongAnimal();
  const WrongCat*  k = new WrongCat();
  std::cout << metameta->getType() << " " << std::endl;
  std::cout << k->getType() << " " << std::endl;
  metameta->makeSound();
  k->makeSound();
  delete metameta;
  delete k;
  draw_terminal_line();
  return (EXIT_SUCCESS);
}