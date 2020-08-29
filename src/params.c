/*
** params.c for params.c in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome/src
** 
** Made by lucas obadia
** Login   <obadia_l@epitech.net>
** 
** Started on  Thu Jun 16 16:46:20 2016 lucas obadia
** Last update Sat Jun 18 12:45:34 2016 lucas obadia
*/

#include "palindrome.h"
#include <string.h>
#include <stdlib.h>

int	check_params(int ac, char **av, t_opt *opt_struct)
{
  if ((check_all_double(ac, av)) == -1)
    return (-1);
  if ((ac == 3) || (ac > 3))
    {
      if ((my_strcmp(av[1], "-n") == 0) || (my_strcmp(av[1], "-p") == 0))
	{
	  if (check_nbr(av[2]) != 0)
	    return (-1);
	  if ((my_select(av[1], "-n", "-p")) == 1)
	    opt_struct->n = atoi(av[2]);
	  else
	    {
	      opt_struct->p = atoi(av[2]);
	      if ((check_if_palindrome(opt_struct->p)) != 0)
		return (-1);
	    }
	}
      else
	return (-1);
    }
  if (ac > 3)
    {
      if ((check_params2(ac, av, opt_struct, 0)) == -1)
	return (-1);
    }
  return (0);
}

int	check_params2(int ac, char **av, t_opt *opt_struct, int d)
{
  if ((ac == 5) || (ac > 5))
    {
      if ((my_strcmp(av[3], "-b") == 0) || (my_strcmp(av[3], "-imin") == 0)
	  || (my_strcmp(av[3], "-imax") == 0))
	{
	  if (check_nbr(av[4]) != 0)
	    return (-1);
	  if ((d = my_select2(av[3], "-b", "-imin", "-imax")) == 1)
	    {
	      if ((check_int_b(atoi(av[4]))) == 0)
		opt_struct->b = atoi(av[4]);
	      else
		return (-1);
	    }
	  else if (d == 2)
	    opt_struct->imin = atoi(av[4]);
	  else if (d == 3)
	    opt_struct->imax = atoi(av[4]);
	}
      else
	return (-1);
    }
  if (ac > 5)
    {
      if ((check_params3(ac, av, opt_struct, 0)) == -1)
	return (-1);
    }
  return (0);
}

int	check_params3(int ac, char **av, t_opt *opt_struct, int d)
{
  if ((ac == 7) || (ac > 7))
    {
      if ((my_strcmp(av[5], "-b") == 0) || (my_strcmp(av[5], "-imin") == 0)
	  || (my_strcmp(av[5], "-imax")) == 0)
	{
	  if (check_nbr(av[6]) != 0)
	    return (-1);
	  if ((d = my_select2(av[5], "-b", "-imin", "-imax")) == 1)
	    {
	      if ((check_int_b(atoi(av[6]))) == 0)
		opt_struct->b = atoi(av[6]);
	      else
		return (-1);
	    }
	  else if (d == 2)
	    opt_struct->imin = atoi(av[6]);
	  else if (d == 3)
	    opt_struct->imax = atoi(av[6]);
	}
      else
	return (-1);
    }
  if (ac > 7)
    {
      if ((check_params4(ac, av, opt_struct)) == -1)
	return (-1);
    }
  return (0);
}

int	check_params4(int ac, char **av, t_opt *opt_struct)
{
  int	d;

  if (ac == 9)
    {
      if ((my_strcmp(av[7], "-b") == 0) || (my_strcmp(av[7], "-imin") == 0)
	  || (my_strcmp(av[7], "-imax") == 0))
	{
	  if (check_nbr(av[8]) != 0)
	    return (-1);
	  if ((d = my_select2(av[7], "-b", "-imin", "imax")) == 1)
	    {
	      if ((check_int_b(atoi(av[8]))) == 0)
		opt_struct->b = atoi(av[8]);
	      else
		return (-1);
	    }
	  else if (d == 2)
	    opt_struct->imin = atoi(av[8]);
	  else if (d == 3)
	    opt_struct->imax = atoi(av[8]);
	}
      else
	return (-1);
    }
  return (0);
}
