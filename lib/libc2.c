/*
** libc2.c for libc2.c in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome/lib
** 
** Made by lucas obadia
** Login   <obadia_l@epitech.net>
** 
** Started on  Fri Jun 17 15:42:36 2016 lucas obadia
** Last update Fri Jun 17 15:47:12 2016 lucas obadia
*/

#include <unistd.h>

void	my_fputc(int fd, char c)
{
  write(fd, &c, 1);
}

void	my_fputs(int fd, char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_fputc(fd, str[a]);
      a = a + 1;
    }
}
