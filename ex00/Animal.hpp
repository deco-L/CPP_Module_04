/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/08 11:45:08 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP

#include <iostream>

class Animal {
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

