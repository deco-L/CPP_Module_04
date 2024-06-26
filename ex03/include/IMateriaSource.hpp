/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/30 23:29:20 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AbstractRoot.hpp"
#include "AMateria.hpp"

class IMateriaSource
{
public:
  virtual ~IMateriaSource() {}

  virtual void  learnMateria( AMateria* ) = 0;
  virtual AMateria* createMateria( const std::string& type ) = 0;
};

#endif
