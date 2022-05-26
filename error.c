/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:52:51 by ebakchic          #+#    #+#             */
/*   Updated: 2022/05/22 22:52:54 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void    error(int i)
{
    if (i == 1)
    {
        write(2, "Error: in pipe\n", 15);
        exit(EXIT_FAILURE);
    }
    else if (i == 2)
    {
        write(2, "Error: fork failed\n", 19);
        exit(EXIT_FAILURE);
    }
    else if (i == 3)
    {
        write(2, "Error: Command not found\n", 25);
        exit(EXIT_FAILURE);
    }
    else if (i == 4)
    {
        write(2, "Error: No such file or directory\n", 33);
        exit(EXIT_FAILURE);
    }
    else
    {
        write(2, "Error: permission denied\n", 25);
        exit(EXIT_FAILURE);
    }
}