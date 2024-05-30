/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/31 00:01:40 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "AbstractRoot.hpp"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
  std::string type;

public:
  AMateria( void );
  AMateria( const std::string& type );
  AMateria( const AMateria& obj );
  virtual ~AMateria() {}

  const std::string&  getType( void ) const;
  virtual AMateria* clone( void ) const = 0;
  virtual void  use( ICharacter& target );

  AMateria& operator=( const AMateria& obj );
};

#endif
