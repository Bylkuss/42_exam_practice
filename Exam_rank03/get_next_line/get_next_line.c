/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:20:17 by loadjou           #+#    #+#             */
/*   Updated: 2023/01/20 12:31:16 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    char c;
    int i = 0;
    int rd;
    char *buff = malloc(sizeof(BUFFER_SIZE) * 10000);
    while ((rd = read(fd, &c, BUFFER_SIZE)) > 0)
    {
        buff[i++] = c;
        if (c == '\n')
            break;
    }
    if ((!buff[i - 1] && !rd) || rd == -1)
    {
        free(buff);
        return 0;
    }
    buff[i] = '\0';
    return buff;
}

/*
int main(void)
{
    char *line;
    int i;
    int fd1;
    fd1 = open("subject.en.txt", O_RDONLY);
    i = 1;
    line = get_next_line(fd1);
    while (line)
    {
        printf("%s", line);
        line = get_next_line(fd1);
        free(line);
    }
    close(fd1);
    return (0);
}
*/