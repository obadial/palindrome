/*
** requirement.c for requirement.c in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome
** 
** Made by lucas obadia
** Login   <obadia_l@epitech.net>
** 
** Started on  Thu Jun 16 09:42:32 2016 lucas obadia
** Last update Sat Jun 18 14:35:13 2016 lucas obadia
*/

int	my_factrec_synthesis(int nb)
{
  int	quit;

  quit = 0;
  if ((nb >= 13) || (nb < 0))
    return (quit);
  else if (nb == quit)
    return (1);
  if (nb > 1)
    nb = my_factrec_synthesis(nb - 1) * nb;
  return (nb);
}

int	my_squareroot_synthesis(int nb)
{
  int	test;
  int	error;

  error = -1;
  test = 0;
  if ((nb >= 2147483647) || (nb < 0))
    return (error);
  while (test <= nb)
    {
      if ((test * test) == nb)
	return (test);
      test = test + 1;
      if (test >= 2147483647 / 2)
	return (error);
    } 
  return (error);
}
