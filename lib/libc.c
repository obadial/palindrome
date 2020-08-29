/*
** libc.c for libc.c in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome/lib
** 
** Made by lucas obadia
** Login   <obadia_l@epitech.net>
** 
** Started on  Thu Jun 16 11:55:06 2016 lucas obadia
** Last update Sat Jun 18 10:49:55 2016 lucas obadia
*/

#include <unistd.h>
#include "palindrome.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
}

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else
    my_putchar(nb + 48);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while ((s1[i] != '\0') && (s2[i] != '\0') &&
	 (s1[i] == s2[i]))
    {
      i++;
    }
  return (s1[i] - s2[i]);
}
