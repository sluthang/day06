/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sluthang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:41:22 by sluthang          #+#    #+#             */
/*   Updated: 2020/06/25 09:43:21 by sluthang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
   write(1,&c,1);
}	

