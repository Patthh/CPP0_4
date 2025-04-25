/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:55 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 01:21:12 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Modern(?) Header-protection
#pragma once
// #ifndef ZOMBIE_HPP
// #define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RES     "\033[0m"

class Zombie 
{
 private:
  std::string _name;

 public:
  Zombie();
  ~Zombie();
  //a Public Method
  void  announce(void);
  void  setName(std::string name);

};

Zombie	*zombieHorde(int N, std::string name);

// #endif 