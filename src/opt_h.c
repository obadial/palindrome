/*
** opt_h.c for opt_h.c in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome/src
** 
** Made by lucas obadia
** Login   <obadia_l@epitech.net>
** 
** Started on  Thu Jun 16 18:50:18 2016 lucas obadia
** Last update Thu Jun 16 19:13:28 2016 lucas obadia
*/

#include <stdio.h>
#include "palindrome.h"

void	my_opt_h(void)
{
  printf("%s", "USAGE\n");
  printf("%s", "               ");
  printf("%s", "./palindrome -n number -p palindrome");
  printf("%s", "[-b base] [-imin i] [-imax i]\n");
  printf("%s", "\nDESCRIPTION\n");
  printf("%s", "      -n nb        ");
  printf("%s", "integer to be transformed (>=0)\n");
  printf("%s", "      -p pal       ");
  printf("%s", "palindromic number to be obtained");
  printf("%s", " (incompatible with the -n option) (>= 0)\n");
  printf("%s", "                   ");
  printf("%s", "if defined, all fitting values of n will be output\n");
  printf("%s", "      -b base      ");
  printf("%s", "base in which the procedure will be executed");
  printf("%s", " (1 < b <= 10) [def: 10]\n");
  printf("%s", "      -imin i      ");
  printf("%s", "minimum number of iterations, included (>= 0)");
  printf("%s", " [def: 0]\n");
  printf("%s", "      -imax i      ");
  printf("%s", "maximum number of iterations, included (>= 0)");
  printf("%s", " [def: 100]\n");
}
