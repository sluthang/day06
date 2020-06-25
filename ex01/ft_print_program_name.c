/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sluthang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 10:18:46 by sluthang          #+#    #+#             */
/*   Updated: 2020/06/25 14:12:48 by sluthang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char  c);

int main(int argc,char *argv[] )
{ 
   int i;
   i = 0 ;
   while (argv[0][i])
   {
       ft_putchar(argv[0][i]);
       i++;
	   return  (argv[4]++);
   }	   
   ft_putchar('\n');

   return (0);
}


