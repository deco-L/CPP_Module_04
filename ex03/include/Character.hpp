/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/31 00:08:16 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
  std::string name;
  AMateria    *slot[ARRAY_SIZE];

public:
  Character( void );
  Character( const std::string& name );
  Character( const Character& obj );
  ~Character();

  const std::string& getName( void ) const;
  void  equip( AMateria* obj );
  void  unequip( int idx );
  void  use( int idx, ICharacter& target );

  Character&  operator=( const Character& obj );
};

#endif
