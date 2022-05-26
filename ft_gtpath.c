/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gtpath.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:05:04 by ebakchic          #+#    #+#             */
/*   Updated: 2022/05/22 14:05:07 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char    *ft_gtpath(char **envp, char *cmd)
{
    int i;
    char **path;
    char    *s;

    i = 0;
    while (ft_memcmp(envp[i], "PATH", 4))
        i++;
    envp[i] += 5;
    path = ft_split(envp[i], ':');
    i = 0; 
    while (path[i])
    {
        s = ft_strjoin(path[i], "/");
        s = ft_strjoin(s, cmd);
        if (access(s, F_OK) == 0)
            return (s);
        i++;
    }
    free(s);
    error(3);
    return (0);
}
