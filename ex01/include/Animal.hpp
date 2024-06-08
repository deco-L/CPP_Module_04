/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/06/08 15:55:01 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define HERD 4

class Animal
{
protected:
  std::string type;

public:
  Animal( void );
  Animal( const Animal& obj );
  Animal( const std::string& type );
  virtual ~Animal( void );

  virtual void  makeSound( void ) const;
  std::string  getType( void ) const;

  Animal& operator=( const Animal& obj );
};

#endif

