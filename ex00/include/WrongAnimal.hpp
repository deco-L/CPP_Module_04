/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/06/08 14:58:35 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
  std::string type;

public:
  WrongAnimal( void );
  WrongAnimal( const WrongAnimal& obj );
  WrongAnimal( const std::string& type );
  ~WrongAnimal( void );

  void  makeSound( void ) const;
  std::string  getType( void ) const;

  WrongAnimal& operator=( const WrongAnimal& obj );
};

#endif

