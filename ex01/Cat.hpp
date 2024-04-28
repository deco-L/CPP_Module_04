/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/29 00:13:12 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP

#include "Animal.hpp"

class Cat :
public Animal {
public:
  Cat( void );
  Cat( const Cat& obj );
  ~Cat( void );

  void  makeSound( void );
  void  getType( void );

  Cat&  operator=( const Cat& obj );
};

#endif
