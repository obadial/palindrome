/*
** params2.c for params2.c in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome/src
** 
** Made by lucas obadia
** Login   <obadia_l@epitech.net>
** 
** Started on  Thu Jun 16 18:11:57 2016 lucas obadia
** Last update Fri Jun 17 16:04:51 2016 lucas obadia
*/

#include <stdlib.h>
#include "palindrome.h"

int	check_all_double(int ac, char **av)
{
  int	**tab;

  if ((tab = memory_tab()) == NULL)
    return (-1);
  if ((ac == 3) || (ac == 5) || (ac == 7)
      || (ac == 9))
    {
     tab = pass_fct(ac, av, tab);
     if ((check_tab(tab)) == -1)
       return (-1);
    }
  else
    {
      if ((check_param_in(ac, av)) == 0)
	{
	  my_opt_h();
	  return (-1);
	}
    }
  return (0);
}

int	check_param_in(int ac, char **av)
{
  int	i;

  i = 0;
  while (i < ac)
    {
      if ((my_strcmp(av[i], "-h")) == 0)
	return (0);
      i = i + 1;
    }
  return (-1);
}

int 	**pass_fct(int ac, char **av, int **tab)
{
  int	a;

  a = 1;
  while (a < (ac - 1))
    {
      if ((my_strcmp(av[a], "-n")) == 0)
	tab[0][0] = tab[0][0] + 1;
      else if ((my_strcmp(av[a], "-p")) == 0)
	tab[1][0] = tab[1][0] + 1;
      else if ((my_strcmp(av[a], "-b")) == 0)
	tab[2][0] = tab[2][0] + 1;
      else if ((my_strcmp(av[a], "-imin")) == 0)
	tab[3][0] = tab[3][0] + 1;
      else if ((my_strcmp(av[a], "-imax")) == 0)
	tab[4][0] = tab[4][0] + 1;
      a = a + 2;
    }
  return (tab);
}

int	check_tab(int **tab)
{
  int	i;

  i = 0;
  while (i < 4)
    {
      if (tab[i][0] > 1)
	return (-1);
      i = i + 1;
    }
  return (0);
}

int	**memory_tab(void)
{
  int	**tab;
  int	i;

  i = 0;
  if ((tab = malloc((7 + 1) * sizeof(int*))) == NULL)
    return (NULL);
  tab[7] = 0;
  while (i <= 6)
    {
      if ((tab[i] = malloc((1) * sizeof(int))) == NULL)
	return (NULL);
      tab[i][0] = 0;
      i = i + 1;
    }
  return (tab);
}
