/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:00:26 by loadjou           #+#    #+#             */
/*   Updated: 2023/01/16 18:03:52 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_printf(const char *, ... )
{
    va_list ptr;
    va_start(ptr, format);
    int i = 0;
    int len = 0;
    va_end(ptr);
}


int main()
{
    return 0;
}
