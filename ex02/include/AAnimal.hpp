/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/06/08 15:47:56 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

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
  virtual ~Animal( void ) = 0;

  virtual void  makeSound( void ) const = 0;
  std::string  getType( void ) const;

  Animal& operator=( const Animal& obj );
};

#endif

