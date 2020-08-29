/*
** main.c for main.c in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome/src
** 
** Made by lucas obadia
** Login   <obadia_l@epitech.net>
** 
** Started on  Thu Jun 16 11:53:17 2016 lucas obadia
** Last update Sat Jun 18 15:29:47 2016 lucas obadia
*/

#include "palindrome.h"
#include <stdio.h>

int		my_boucle(int palindrome, int nb, int nb2, t_opt *opt_struct)
{
  int		new_nb;
  int		nb_first;

  if (opt_struct->n != 0)
    nb_first = opt_struct->n;
  if (nb_first < 0)
    return (-1);
  if (opt_struct->b == 10)
    palindrome = check_if_palindrome(nb_first);
  while (palindrome == -1)
    {
      nb = get_div(nb_first);
      if ((opt_struct->b) == 10)
	{
	  if ((nb2 = int_reverse(nb_first, nb)) == -1)
	    return (-1);
	}
      else
	{
	  nb2 = my_new_base(nb_first, opt_struct->b);
	  if (nb2 == nb_first)
	    {
	      opt_struct->solution = nb_first;
	      return (0);
	    }
	}
      if ((new_nb = add_nw_and_old(nb_first, nb2)) == -1)
	return (-1);
      if (((palindrome = check_if_palindrome(new_nb)) == 0) &&
	  ((opt_struct->ite + 1) < opt_struct->imin))
	return (-3);
      nb_first = new_nb;
      opt_struct->ite = opt_struct->ite + 1;
      if (opt_struct->imax != 0)
	{
	  if ((opt_struct->ite) > opt_struct->imax)
	    return (-2);
	}
    }
  opt_struct->solution = nb_first;
  return (0);
}


int		my_boucle2(t_opt *opt_struct, int nb, int new_nb, int i)
{
  int		target;
  int		nb2;
  int		nb_first;
  int		mem;

  mem = 0;
  target = opt_struct->p;
  while (i <= target)
    {
      opt_struct->ite = 0;
      nb_first = i;
      while (nb_first < target)
	{
	  nb = get_div(nb_first);
	  if ((opt_struct->b) == 10)
	    nb2 = int_reverse(nb_first, nb);
	  else
	    nb2 = my_new_base(nb_first, opt_struct->b);
	  new_nb = add_nw_and_old(nb_first, nb2);
	  nb_first = new_nb;
	  opt_struct->ite = opt_struct->ite + 1;
	}
      if ((nb_first == target) && (opt_struct->ite >= opt_struct->imin)
	  && (opt_struct->ite <= opt_struct->imax))
	{
	  mem = 1;
	  printf("%d", i);
	  printf("%s", " leads to ");
	  printf("%d", target);
	  printf("%s", " in ");
	  printf("%d", opt_struct->ite);
	  printf("%s", " iteration(s)");
	  printf("%s", " in base ");
	  printf("%d", opt_struct->b);
	  printf("%c", '\n');
	}
      i = i + 1;
    }
  if (mem == 0)
    {
      printf("%s", "no solution\n");
      return (-1);
    }
  return (0);
}

int		main(int ac, char **av)
{
  t_opt		opt_struct;
  int		palindrome;
  
  palindrome = 0;
  initialize_struct(&opt_struct); 
  if ((ac > 10) || (ac < 3) || (ac == 4) || (ac == 6) || (ac == 8))
    {
      if (ac == 1)
	{
	  my_fputs(2, "invalid argument\n");
	  return (84);
	}
      if ((my_strcmp(av[1], "-h")) == 0)
	my_opt_h();
      else
	my_fputs(2, "invalid argument\n");
      return (84);
    }
  else
    {
      if ((check_params(ac, av, &opt_struct)) == -1)
	{
	  my_fputs(2, "invalid argument\n");
	  return (84);
	}
      else
	{
	  if (opt_struct.imax < opt_struct.imin)
	    {
	      my_fputs(2, "invalid argument\n");
	      return (84);
	    }
	  if ((opt_struct.n) != 0)
	    {
	      if ((palindrome = my_boucle(-1,0, 0, &opt_struct)) == -1)
		{
		  printf("%s", "no solution\n");
		  return (0);
		}
	      if ((palindrome == -2) || (palindrome == -3))
		{
		  printf("%s", "no solution\n");
		  return (0);
		}
	      printf("%d", opt_struct.n);
	      printf("%s", " leads to ");
	      printf("%d", opt_struct.solution);
	      printf("%s", " in ");
	      printf("%d", opt_struct.ite);
	      printf("%s", " iteration(s)");
	      printf("%s", " in base ");
	      printf("%d", opt_struct.b);
	      printf("%c", '\n');
	    }
	  else
	    {
	      if ((my_boucle2(&opt_struct, 0, 0, 1)) == -1)
		return (0);
	    }
	  
	}
    } 
  return (0);
}
