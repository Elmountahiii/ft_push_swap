/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:48:26 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/21 13:40:14 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "../lib.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char		*get_next_line(int fd);
char		*ft_strchr(char *str, int c);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strdup(char *str);
char		*clean(char **rest);
char		*extract_new_line(char **rest);
char		*read_line(int fd, char **rest);
void		free_and_null(char **str);

#endif