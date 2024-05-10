/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/10 14:29:15 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
#define MATERIA_HPP

#include <iostream>
#include "Character.hpp"

class AMateria {
protected:
  std::string type;

public:
  AMateria( void );
  AMateria( const std::string& type );
  AMateria( const AMateria& obj );
  ~AMateria( void );

  std::string&  getType() const;
  virtual AMateria* clone() const = 0;
  virtual void  use( ICharacter& target );

  AMateria& operator=( const AMateria& obj );
};

#endif
