/*
** check_info.c for check_info.c in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome/src
** 
** Made by lucas obadia
** Login   <obadia_l@epitech.net>
** 
** Started on  Fri Jun 17 13:58:03 2016 lucas obadia
** Last update Sat Jun 18 12:01:09 2016 lucas obadia
*/

#include <stdio.h>

int	my_new_base(int nb, int base)
{
  int	res;

  res = 0;
  if ((nb > 1000000000) || (nb < 0))
    return (-1);
  while (nb != 0)
    {
      res = res * base;
      res = res + (nb % base);
      nb = nb / base;
    }
  return (res);
} 

int	check_nbr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if ((str[a] < '0') || (str[a] > '9'))
	{
	  return (-1);
	}
      a = a + 1;
    }
  return (0);
}

int	check_int_b(int nb)
{
  if ((nb >= 2) && (nb < 11))
    return (0);
  return (-1);
}
