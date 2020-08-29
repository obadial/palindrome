/*
** palindrome.h for palindrome.h in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome/include
** 
** Made by lucas obadia
** Login   <obadia_l@epitech.net>
** 
** Started on  Thu Jun 16 12:00:04 2016 lucas obadia
** Last update Sat Jun 18 12:02:37 2016 lucas obadia
*/

#ifndef PALINDROME_H_
# define PALINDROME_H_

typedef	struct	s_opt
{
  int		n;
  int		p;
  int		b;
  int		imin;
  int		imax;
  int		ite;
  int		solution;
}		t_opt;

/*
** opt_h.c
*/
void	my_opt_h(void);

/*
** src/param2.c
*/
int	check_all_double(int ac, char **av);
int	**memory_tab(void);
int	check_param_in(int ac, char **av);
int	**pass_fct(int ac, char **av, int **tab);
int	check_tab(int **tab);

/*
** src/get_div.c
*/
int	get_div(int nb);
int	int_reverse(int nb, int div);
int	add_nw_and_old(int nb1, int nb2);
int	check_if_palindrome(int new_old);

/*
** src/params.c
*/
int	check_params(int ac, char **av, t_opt *opt_struct);
int	check_params2(int ac, char **av, t_opt *opt_struct, int d);
int	check_params3(int ac, char **av, t_opt *opt_struct, int d);
int	check_params4(int ac, char **av, t_opt *opt_struct);

/*
** lib/libc.c
*/
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr(int nb);
int	my_strcmp(char *s1, char *s2);

/*
** lib/libc2.c
*/
void	my_fputc(int fd, char c);
void	my_fputs(int fd, char *str);

/*
** src/init_struct.c
*/
void	initialize_struct(t_opt *opt_struct);
int	my_select(char *av, char *s1, char *s2);
int	my_select2(char *av, char *s1, char *s2, char *s3);

/*
** src/check_info.c
*/
int	my_new_base(int nb, int base);
int	check_nbr(char *str);
int	check_nbr(char *str);
int	check_int_b(int nb);

#endif /* !PALINDROME_H_ */
