/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/30 23:29:16 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AbstractRoot.hpp"
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
protected:
  std::string name;

public:
  virtual ~ICharacter() {}

  virtual const std::string& getName( void ) const = 0;
  virtual void  equip( AMateria* obj ) = 0;
  virtual void  unequip( int idx ) = 0;
  virtual void  use( int idx, ICharacter& target ) = 0;
};

#endif
