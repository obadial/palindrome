/*
** init_struct.c for init_struct.c in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome/src
** 
** Made by lucas obadia
** Login   <obadia_l@epitech.net>
** 
** Started on  Fri Jun 17 11:51:01 2016 lucas obadia
** Last update Fri Jun 17 16:03:10 2016 lucas obadia
*/

#include "palindrome.h"

void	initialize_struct(t_opt *opt_struct)
{
  opt_struct->n = 0;
  opt_struct->p = 0;
  opt_struct->b =  10;
  opt_struct->imin = 0;
  opt_struct->imax = 100;
  opt_struct->ite = 0;
  opt_struct->solution = 0;
}

int	my_select(char *av, char *s1, char *s2)
{
  if ((my_strcmp(av, s1)) == 0)
    return (1);
  if ((my_strcmp(av, s2)) == 0)
    return (2);
  return (0);
} 

int	my_select2(char *av, char *s1, char *s2, char *s3)
{
  if ((my_strcmp(av, s1)) == 0)
    return (1);
  if ((my_strcmp(av, s2)) == 0)
    return (2);
  if ((my_strcmp(av, s3)) == 0)
    return (3);
  return (0);
}
