/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:13:50 by fio               #+#    #+#             */
/*   Updated: 2025/05/19 14:23:46 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>      // pour open
#include <stdlib.h>     // pour free
#include <unistd.h>     // pour close
#include <stdio.h>      // pour printf
#include "get_next_line.h"

int main(void)
{
    int     fd;
    char    *line;

    fd = open("file.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    close(fd);
    return (0);
}