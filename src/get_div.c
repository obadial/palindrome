/*
** get_div.c for get_div.c in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome/src
** 
** Made by lucas obadia
** Login   <obadia_l@epitech.net>
** 
** Started on  Thu Jun 16 11:50:33 2016 lucas obadia
** Last update Fri Jun 17 14:21:37 2016 lucas obadia
*/

#include "palindrome.h"

int	get_div(int nb)
{
  int	div;

  div = 1;

  while (nb >= 10)
    {
      nb = nb / 10;
      div = div * 10;
    }
  return (div);
}

int	int_reverse(int nb, int div)
{
  int	rev;
  int	mul;

  mul = 1;
  rev = 0;
  if (nb >= 1000000000)
    return (-1);
  while (div != 0)
    {
      
      rev = rev + ((nb / div) * mul);
      nb = (nb % div);
      div = div / 10;
      mul = mul * 10;
    }
  return (rev);
}

int	add_nw_and_old(int nb1, int nb2)
{
  int	nw_nb;

  nw_nb = 0;
  if ((nb1 + nb2) >= 2100000000)
    return (-1);
  nw_nb = (nb1 + nb2);
  return (nw_nb);
}

int	check_if_palindrome(int new_nb)
{
  int	base_nw;

  base_nw = (get_div(new_nb));
  if (new_nb == (int_reverse(new_nb, base_nw)))
    {
      return (0);
    }
  return (-1);
}
